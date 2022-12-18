#include<stdio.h>
#include<stdlib.h>

// structure of linked list 

struct node{
    int data;
    struct node * next;
};

// creating a function to print the linked list 

void linkedlisttraversal(struct node * ptr){
    while(ptr!=NULL)
    {
    printf("item : %d\n",ptr->data);
    ptr=ptr->next;
    }
}


int main(){
    struct node * head ;
    struct node * second ;
    struct node * third ;
    
// memory allocation for nodes in linked list 
    
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    
// linking the chain 
    
    head->data=13;
    head->next=second;  
    second->data=23;
    second->next=third; 
    third->data=56;
    third->next=NULL; 


linkedlisttraversal(head);
    return 0;
}