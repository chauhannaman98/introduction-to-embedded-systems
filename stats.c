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
int median(int *array, int size)    {
    int mid;
    if(size%2==0)   //size is even
        mid=size/2;
    if(size%2!=0)   //size is odd
        mid=(size+1)/2;
    return array[mid];
}

// To find the mean of the elements of the array
int mean(int *array, int size)   {
    int sum = 0;
    for(int i=0; i<size; i++)   {
        sum+=array[i];
    }
    int avg = sum/size;
    return avg;
}

// To find the largest element of the array
int max(int *array, int size)   {
    int largest = array[0];
    for(int i=0; i<size-1; i++)   {
        if(array[i+1]>array[i])
            largest=array[i+1];
    }
    return largest;
}

// To find the smallest element of the array
int min(int *array, int size)   {
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