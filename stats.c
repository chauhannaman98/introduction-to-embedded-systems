#include "stats.h"

// To print all the statistics
void print_statistics(int min, int max, int mean, int median)   {
    printf("\nMean = %d", mean);
    printf("\nMedian = %d", median);
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
}

// To print the array
void print_array(int array, int size)   {
    printf("\nArray: ");
    for(int i=0; i<size; i++)   {
        printf("%d", array[i]);
        printf(",/t");
    }
}

// To find the mean of the elements of the array
int mean(int array, int size)   {
    int sum = 0;
    for(int i=0; i<size; i++)   {
        sum+=array[i];
    }
    int avg = sum/size;
    return avg;
}

/*TO BE COMPLETED */