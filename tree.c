#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
char data;
struct node *left;
struct node *right;
} node;
 
node *create()
{
node *p;
char x;
printf("Enter data(/ for no data):");
scanf(" %c",&x);
if(x=='/')
return NULL;
p=(node*)malloc(sizeof(node));
p->data=x;
printf("Enter left child of %c:\n",x);
p->left=create();
 
printf("Enter right child of %c:\n",x);
p->right=create();
return p;
}
 void display(node *t) 
{
if(t!=NULL)
{
printf(" %c",t->data); 
display(t->left); 
display(t->right); 
}
}
 int main()
{
node *root;
root=create();
printf("\nThe BINARY TREE is CREATED!!:\n");
display(root);
return 0;
}
