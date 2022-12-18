#include<stdio.h>
void display(int arr[],int n){
    
    // traversing
    
    for (int i = 0;i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

// logic for deletion

int indexdeletion(int arr[],int size,int index){
    for (int i = index; i < size-1 ; i++)
    {
        arr[i+1]=arr[i];
    }
    return 1;
} 
int main(){
    int arr[100]={1,2,3,4,5,6,7};
    int size=7,index=3;
    display(arr,size);
    indexdeletion(arr,size,index);
    size-=1;
    display(arr,size);
    return 0;
}