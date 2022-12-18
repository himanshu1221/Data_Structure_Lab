#include<stdio.h>
#include<stdlib.h>

// structure of linked list 

struct node{
    int data;
    struct node * next;
};

// function for insertion at first position

struct node *insertatfirst(struct node*head,int data){
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    ptr -> next =head;
    ptr -> data = data;
    return ptr;
}


// function for insertion at index 

struct node *insertatindex(struct node*head,int data,int index){
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    struct node * p =head;
    int i=0;
    while (i!=index-1)
    {
        p = p -> next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}


// insert at the end 


struct node *insertationatend(struct node*head,int data){
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
     ptr -> data =data;
    struct node * p =head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr -> next= NULL;
    return head;
}


// insert after a node

struct node *insertationafternode(struct node*head,struct node*prevnode,int data){
    struct node*ptr =(struct node*)malloc(sizeof(struct node));
    ptr -> data =data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}

// creating a function to traverse the linked list 

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
    

// traversing original linked list


linkedlisttraversal(head);
printf("\n");
// calling insertion at first index 


head = insertatfirst(head,76); 
linkedlisttraversal(head);
printf("\n");


// calling insertion at any index 

head=insertatindex(head,45,2);
linkedlisttraversal(head);
printf("\n");


// calling insertion at last index 

head = insertationatend(head,78);
linkedlisttraversal(head);
printf("\n");


// calling insertion at last index 

head = insertationafternode(head,second,690);
linkedlisttraversal(head);
printf("\n");

    return 0;
}
