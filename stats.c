#include <stdio.h>
#include "stats.h"

// To print all the statistics
void print_statistics(int min, int max, int mean, int median)   {
    printf("\nMean = %d", mean);
    printf("\nMedian = %d", median);
    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);
}

// To print the array
void print_array(int *array, int size)   {
    printf("\nArray: ");
    for(int i=0; i<size; i++)   {
        printf("%d", array[i]);
        printf(",/t");
    }
}

// To find the median of the given array
int find_median(int *array, int size)    {
    sort(array, size);
    int mid;
    if(size%2==0)   //size is even
        mid=size/2;
    if(size%2!=0)   //size is odd
        mid=(size+1)/2;
    return array[mid];
}

// To find the mean of the elements of the array
int find_mean(int *array, int size)   {
    int sum = 0;
    for(int i=0; i<size; i++)   {
        sum+=array[i];
    }
    int avg = sum/size;
    return avg;
}

// To find the largest element of the array
int find_max(int *array, int size)   {
    int largest = array[0];
    for(int i=0; i<size-1; i++)   {
        if(array[i+1]>array[i])
            largest=array[i+1];
    }
    return largest;
}

// To find the smallest element of the array
int find_min(int *array, int size)   {
    int smallest = array[0];
    for(int i=0; i<size-1; i++) {
        if(array[i+1]<array[i])
            smallest=array[i+1];
    }
    return smallest;
}

// To sort the array in ascending order
// Bubble sort
void sort(int *array, int size) {
    int i=0, j=0, temp;
    for(i=1;i<size;++i)
		for(j=0;j<(size-i);++j)
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
}


int main()  {
    int arr[16] = { 2,  5,  8, 23,
                   17, 21,  7, 60,
                   23, 30, 12, 51,
                   19, 39, 47, 36};

    int n = 16;

    print_array(arr, n);    // printing the array

    /*finding all the statistic parameters */
    int minimum = find_min(arr, n);
    int maximum = find_max(arr, n);
    int mean = find_mean(arr, n);
    int median = find_median(arr, n);

    print_statistics(minimum, maximum, mean, median);   // print the statistics data

    return 0;
}