///Binary Search using recursion in c
#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    while(l<=r)
    {
        int m=l+(r-1)/2;
        if(arr[m]==x)
            return m;
        if(arr[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    return -1;
}

int main(void)
{
    int arr[]={1, 2, 3, 4,5,6,7,8,9, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int result=binarySearch(arr, 0, n-1, x);
    (result== -1)?printf("Element is not present in the array.\n")
                :printf("Element is present at index %d\n",result);
    return 0;
}

