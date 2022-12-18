// logic for insertion sort in a given array 

#include<stdio.h>

int main ()

{
    int i,j,n,key,a[]={5,3,6,8,7,67,78};
    n = 7;
    for (i = 0; i < n-1; i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
