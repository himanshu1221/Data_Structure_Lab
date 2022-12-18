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

// deleting the first element from linked list 
struct node*deletefirstelement(struct node*head){
    struct node *ptr =head;
    head = head->next;
    free(ptr);
    return head;
}

// deleting the element from any index in a linked list 
struct node*deleteatindex(struct node*head,int index){
    struct node*p=head;
    struct node*q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

// deleting the last element linked list 
struct node*deletethelast(struct node*head){
    struct node*p=head;
    struct node*q=head->next;
    while (q->next!=NULL)
    {
        q=q->next;
        p=p->next;
    }
    
    p->next=NULL;
    free(q);
    return head;
}

// deleting the element from given value in a linked list 
struct node * deletetheelementbyvalue(struct node*head,int value){
    struct node*p=head;
    struct node*q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}


int main(){
    struct node * head ;
    struct node * second ;
    struct node * third ;
    struct node * fourth ;
    struct node * fifth ;
    struct node * sixth ;

    
// memory allocation for nodes in linked list 
    
    head = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));
    fourth = (struct node *) malloc(sizeof(struct node));
    fifth = (struct node *) malloc(sizeof(struct node));
    sixth = (struct node *) malloc(sizeof(struct node));

    
// linking the chain 
    
    head->data=13;
    head->next=second;  
    second->data=23;
    second->next=third; 
    third->data=56;
    third->next=fourth;
    fourth->data=69;
    fourth->next=fifth;
    fifth->data=96;
    fifth->next=sixth;
    sixth->data=109;
    sixth->next=NULL; 

// calling linkedlist traversing
printf("Linked list before deletion \n");
linkedlisttraversal(head);
printf("\n"); 

// deleting first element of linked list
printf("Linked list after deletion of first element \n");
head = deletefirstelement(head);
linkedlisttraversal(head);
printf("\n");

// deleting element from any index 
printf("Linked list after deletion of index element \n");
head = deleteatindex(head,1);
linkedlisttraversal(head);
printf("\n");

// delete the last node 
printf("Linked list after deletion of last element \n");
head = deletethelast(head);
linkedlisttraversal(head);
printf("\n");

// delete the node by element 
printf("Linked list after deletion of element by value \n");
head = deletetheelementbyvalue(head,69);
linkedlisttraversal(head);
printf("\n");
    return 0;
}