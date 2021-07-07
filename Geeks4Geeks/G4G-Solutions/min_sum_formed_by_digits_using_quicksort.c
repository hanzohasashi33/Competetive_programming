// https://practice.geeksforgeeks.org/problems/min-sum-formed-by-digits/0

/* C implementation QuickSort */
#include<stdio.h> 
#include<stdlib.h>

// A utility function to swap two elements 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* This function takes last element as pivot, places 
the pivot element at its correct position in sorted 
	array, and places all smaller (smaller than pivot) 
to left of pivot and all greater elements to right 
of pivot */
int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; // pivot 
	int i = (low - 1); // Index of smaller element 

	for (int j = low; j <= high- 1; j++) 
	{ 
		// If current element is smaller than the pivot 
		if (arr[j] < pivot) 
		{ 
			i++; // increment index of smaller element 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

/* The main function that implements QuickSort 
arr[] --> Array to be sorted, 
low --> Starting index, 
high --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		/* pi is partitioning index, arr[p] is now 
		at right place */
		int pi = partition(arr, low, high); 

		// Separately sort elements before 
		// partition and after partition 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 



int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i;
        int* arr = (int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        if(i%2==1)
        {
            realloc(arr,(n+1)*sizeof(int));
            arr[n]=0;
            quickSort(arr,0,n);
            int j = n;
	        int k = 1;
	        int sum = 0;
	        while(j>=1)
	        {
		        sum += k*(arr[j]+arr[j-1]);
		        k*=10;
		        j-=2;
	        }
	        printf("%d\n",sum);
	        free(arr);
        }
        else
        {
            quickSort(arr,0,n-1);
            int j = n-1;
	        int k = 1;
	        int sum = 0;
	        while(j>=1)
	        {
		        sum += k*(arr[j]+arr[j-1]);
		        k*=10;
		        j-=2;
	        }
	        printf("%d\n",sum);
	        free(arr);
        }
        //return 0;
        
    }
	return 0;
}
