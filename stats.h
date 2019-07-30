/**The stats.h header file include all declarations and documentation for the functions from the
 *stats.c file. It have function declarations for all required functions except main.
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @breif Prints all the parameters passed in the arguements
 * 
 * This function takes minimum, maximum, mean and median as inputs
 * in arguements and Prints all of them in a fairly presentable way
 * in the output window.
 * 
 * @param min an in
 */
void print_statistics(int min, int max, int mean, int median);

/**
 * 
 */
void print_array(int array, int size);
int median(int array, int size);
int mean(int array, int size);
int max(int array, int size);
int min(int array, int size);
void sort(int array, int size);


#endif