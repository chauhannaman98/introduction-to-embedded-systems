#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = 


# Platform Specific Flags
ifeq ($(PLATFORM), MSP432)
	#Architecture Specific Flags
	LINKER_FILE = msp432p401r.lds
	CPU = cortex-m4
	ARCH = armv7e-m
	SPECS = nosys.specs
	#Compiler Flags and Defines
	CC = arm-none-eabi-gcc
	LDFLAGS = -Wl, -Map=c1m2.map $(INCLUDES) -T $(LINKER_FILE)
	CFLAGS = -Wall -Werror -g -O0 -std=c99 -mcpu=$(CPU)\
			 -mthumb -march=$(ARCH) -mfloat-abi=hard\
			 -mfpu=fpv4-sp-d16 --specs=$(SPECS)
	CPPFLAGS = -DMSP432 -MD
endif
ifeq ($(PLATFORM), HOST)
	#Compiler Flags and Defines
	CC = gcc
	LDFLAGS = -Wl, -Map=c1m2.map $(INCLUDES)
	CFLAGS = -Wall -Werror -g -O0 -std=c99
	CPPFLAGS = -DHOST -MD
endif

%.o : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -c $< -o $@

%.i : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -E $< -o $@

%.asm : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -c $< -o $@
	objdump -S $@

.PHONY: build
build: c1m2.out
c1m2.out: $(SOURCES)
	$(CC) $(SOURCES) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -o c1m2.out
	size c1m2.out

.PHONY: compile-all
compile-all: $(SOURCES)
	$(CC) $(SOURCES) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) -c

.PHONY: clean
clean:
	rm -f *.o *.asm *.i *.d *.map *.out