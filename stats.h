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
 * @param min, max, mean and median are integers
 * @return void
 */
void print_statistics(int min, int max, int mean, int median);


/**
 * @breif Prints all the array elements
 * 
 * This funtion takes array and it's size to print all the elements
 * of array 
 */
void print_array(int array, int size);


int median(int array, int size);
int mean(int array, int size);
int max(int array, int size);
int min(int array, int size);
void sort(int array, int size);


#endif