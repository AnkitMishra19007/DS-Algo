#include<stdio.h>
#include<stdlib.h>

int binary_search(int arr[], int n, int x) //binary search function
{
    int left = 0;
    int right = n-1;
    while (left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            left = mid+1;
        }
        else
        {
            right = mid -1;
        }
        
    }
    return -1;
    
}

int main()
{
    int n,i,result,k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    printf("Enter the elements of sorted array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }
    printf("Enter the element you want to search and make sure the array elements are in sorted order\n");
    scanf("%d", &k);
    result = binary_search(arr, n, k);
    if (result == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("The given element is at index %d\n", result);
    }
    
    

    return 0;
}