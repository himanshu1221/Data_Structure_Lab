#include<stdio.h>


// traversing array
void printarray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubblesort(int a[],int n){
    int temp;
    int issorted=0;
    // for number of pass

    for (int i = 0; i < n-1; i++)
    {
        printf("working on pass nuumber %d\n",i+1);
        issorted=1;
        // for comparision in each pass

        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                issorted=0;
            }
            
        }
        if (issorted)
        {
            return;
        }
        
        
    }
    
}

int main(){
    int a[]={6,8,5,3,9,7,2};
    int n=7;
    // array before sort 
    printarray(a,n);
    // functio to sort     
    bubblesort(a,n);
    // array after sort 
    printarray(a,n);

    return 0;
}