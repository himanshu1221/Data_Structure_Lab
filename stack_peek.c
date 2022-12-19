#include<stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;    
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek(struct stack*sp,int i){
    int arrayInd = sp->top -i+1;
    if(arrayInd<0){
        printf("not a valid positon for stack\n");
        return-1;
    }
    else{
        return sp->arr[arrayInd];
    }
}


int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack * ptr,int val){
    if(isFull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop (struct stack * ptr){
        if(isEmpty(ptr)){
        printf("stack underflow cannot pop from the stack \n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp -> size = 10;
    sp -> top = -1;
    sp -> arr = (int * ) malloc(sp->size*sizeof(int));
    printf("stack has been succesfully created !\n");
    printf("before pushing full: %d\n",isFull(sp));
    printf("before pushing empty: %d\n",isEmpty(sp));

    push(sp,26);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,6);


    printf("after pushing full: %d\n",isFull(sp));
    printf("after pushing empty: %d\n",isEmpty(sp));
    printf("popped %d from the stack\n", pop(sp));

    for (int j = 0; j <= sp->top+1; j++)
    {
        printf("the value at position %d is %d\n",j,peek(sp,j));
    }
    

    return 0;
}