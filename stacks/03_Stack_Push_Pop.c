
#include<stdio.h>


struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack* ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;

    }

}
int isEmpty(struct stack* ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void push(struct stack* ptr,int value)
{

    if(isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int pop(struct stack* ptr)
{

    if(isEmpty(ptr))
    {
        printf("Stack Underflow");
    }
    else
    {
        int value = ptr->arr[ptr-> top];
        ptr->top= ptr->top-1;
        return value;
    }
}
int peek(struct stack* ptr,int i)
{
    int arrInd = ptr->top-i+1;
    if(arrInd<0)
    {
        printf("not a valid position");
        return -1;
    }
    else
    {
        return ptr->arr[arrInd];
    }
}

int topMost(struct stack* ptr)
{
        return ptr->arr[ptr->top];
}

int bottomMost(struct stack* ptr)
{
        return ptr->arr[0];
}

int main()
{
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));

    sp->size=10;
    sp->top=-1;
    sp->arr  = (int *)malloc(sp->size*sizeof(int));
   // printf("the stack has been successfully created\n");

    //printf("Before pushing ,Full =%d\n",isFull(sp));
    //printf("Before pushing ,Empty =%d\n",isEmpty(sp));

    printf("=============================================================\n");

    push(sp,11);
    push(sp,22);
    push(sp,33);
    push(sp,44);
    push(sp,55);
    push(sp,66);
    push(sp,77);
    push(sp,88);
    push(sp,99);
    push(sp,110); // here stack is full  because of size 10
  //push(sp,11); // cant add 11 here

    //printf("After pushing ,Full =%d\n",isFull(sp));
    //printf("After pushing ,Empty =%d\n",isEmpty(sp));


   // printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!  //10
    //printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!  //9
    //printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!  //8

    printf("=============================================================\n");


    //printf("After poping ,Full =%d\n",isFull(sp));
    //printf("After poping ,Empty =%d\n",isEmpty(sp));


    // peek operation

    for(int j=1;j<= sp->top+1;j++)
    {

    printf("The value of stack at position %d is %d\n",j,peek(sp,j));  // printing values of stack

    }

    printf("=============================================================\n");

    printf(" the top most element of stack is %d\n",topMost(sp));
    printf(" the bottom most element of stack is %d\n",bottomMost(sp));






}
