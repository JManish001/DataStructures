#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

};
struct Node* CreateNode(int data)
{
    struct Node *n;
    n= (struct Node*)malloc(sizeof(struct Node));
    n->data=2;
    n->left=NULL;
    n->right=NULL;


}

int main()
{
   /*
    //root node
    struct Node*p;
    p= (struct Node*)malloc(sizeof(struct Node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;

    //first node
    struct Node*p1;
    p1= (struct Node*)malloc(sizeof(struct Node));
    p1->data=1;
    p1->left=NULL;
    p1->right=NULL;

    //second node
    struct Node*p2;
    p2= (struct Node*)malloc(sizeof(struct Node));
    p2->data=4;
    p2->left=NULL;
    p2->right=NULL;

    p->left=p1;
    p->right=p2;

*/
//////////////////// using function
struct Node*p = CreateNode(2);
struct Node*p1=CreateNode(1);
struct Node*p2=CreateNode(4);

p->left=p1;
p->right=p2;


}

