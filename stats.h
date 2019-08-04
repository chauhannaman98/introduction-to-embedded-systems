/**
 * The stats.h header file include all declarations and documentation for the functions from the
 * stats.c file. It have function declarations for all required functions except main.
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
 * of array in the output window.
 * 
 * @param array and size are integers
 * @return void
 */
void print_array(int *array, int size);

/**
 * @breif Returns the median of a sorted array
 * 
 * This function takes a sorted array in ascending order and 
 * it's size to find and return the median of the array.
 * 
 * @param array and size are integers
 * @return med is an integer
 */
int median(int *array, int size);

/**
 * @breif Returns the mean of the array
 * 
 * This function takes an array and it's size and returns 
 * the mean of the array elements.
 * 
 * @param array and size are integers
 * @return avg is an integer
 */
int mean(int *array, int size);

/**
 * @breif Returns the largest element of the array
 * 
 * This function takes an array and it's size and returns 
 * the largest of the array elements.
 * 
 * @param array and size are integers
 * @return lar is an integer
 */
int max(int *array, int size);

/**
 * @breif Returns the smallest element of the array
 * 
 * This function takes an array and it's size and returns 
 * the smallest of the array elements.
 * 
 * @param array and size are integers
 * @return small is an integer
 */
int min(int *array, int size);

/**
 * @breif Sorts the array elements in ascending order
 * 
 * This funtion takes array and it's size to organize elements
 * of the array in ascending order.
 * 
 * @param array and size are integers
 * @return void
 */
void sort(int *array, int size);

#endif