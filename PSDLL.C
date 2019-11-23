#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct n
{
int data;
struct node *next;
}node;

void print(node *n)
{
while(n!=NULL)
{
printf("%d",n->data);
n=n->next;
}
}
void main()
{
 node *head;
 node *second;
head= (node*)malloc(sizeof(node));
second=(node*)malloc(sizeof(node));
head->data=1;
head->next=second;
second->data=2;
second->next=NULL;
getch();
}