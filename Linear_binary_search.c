#include<stdio.h>

// logic for linearsearch

int linearsearch(int arr[],int size,int element)

{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
    }
    return -1;
    
}

// logic for binary search

int binarysearch(int arr[],int size,int element)
{
    int low,mid,high;
    while (low<high)
    {     
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;  
}


int main ()
{

    // // unsorted array for linear search
    // int arr[]={1,2,3,4,5,6,7,8};
    // int size =sizeof(arr)/sizeof(int);


    // unsorted array for binary search
    int arr[]={1,2,56,76,43,21,3,4,5,6,7,8};
    int size =sizeof(arr)/sizeof(int);
    int element = 76;
    int index = linearsearch(arr,size,element);
    printf("the number %d was found at index %d",element,index);    
    return 0;
}