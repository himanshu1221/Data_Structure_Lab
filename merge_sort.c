#include<stdio.h>
int main()
{
    int a[6]={10,11,20,22,30,32};
    int b[5]={7,12,31,80,90};
    int i,j,k,l1,l2,result[11];
    l1=6;
    l2=5;
    i=0;
    j=0;
    k=0;
    while(i<l1 && i<l2)
    {
        if(a[i]<b[j])
        {
            result[k]=a[i];
        }
        else
        {
            result[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<l1)
    {
        result[k]=a[i];
        i++;
        k++;
    }
    while(i<l2)
    {
        result[k]=b[j];
        j++;
        k++;
    }
     for (i = 0; i < 12; i++)
    {
        printf("%d ",result[i]);
    }
return 0;
}