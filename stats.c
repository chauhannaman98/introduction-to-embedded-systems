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
        printf(", ");
    }
}

// To find the median of the given array
int find_median(int *array, int size)    {
    sort(array, size);
    int mid;
    if(size%2==0)   {   //size is even
        mid=size/2;
        int median=(array[mid]+array[mid+1])/2;
        return median;
    }
    else if(size%2!=0)  {   //size is odd
        mid=(size+1)/2;
        return array[mid];
    }   
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
    sort(array, size);
    return array[size-1];
}

// To find the smallest element of the array
int find_min(int *array, int size)   {
    sort(array, size);
    return array[0];
}

// To sort the array in ascending order
// Bubble sort
void sort(int *array, int size) {
    int i=0, j=0, temp;
    for(i=0;i<size-1;i++)
		for(j=i+1;j<(size-1);j++)
			if(array[i]>array[j])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
}


int main()  {
    int arr[40] = { 34, 201, 190, 154,   8, 194,   2,   6,
                    114, 88,   45,  76, 123,  87,  25,  23,
                    200, 122, 150, 90,   92,  87, 177, 244,
                    201,   6,  12,  60,   8,   2,   5,  67,
                    7,  87, 250, 230,  99,   3, 100,  90};

    int n = 40;

    print_array(arr, n);    // printing the array

    /*finding all the statistic parameters */
    int minimum = find_min(arr, n);
    int maximum = find_max(arr, n);
    int mean = find_mean(arr, n);
    int median = find_median(arr, n);

    print_statistics(minimum, maximum, mean, median);   // print the statistics data

    return 0;
}
