#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 50
char stck1[MAX];
char stck2[MAX];
void push(char);
void pop();
void compare();
int top=-1;
void main()
{int i;

printf("enter the string = ");
gets(stck1);
for(i=0;stck1[i]!='\0';i++)
{
push(stck1[i]);}
pop();
compare();
getch();
}
void push(char j)
{
if(top==MAX)
printf("stack is full");
else
top=top+1;
stck1[top]=j;
}
void pop()
{
int z,k;

for(z=top,k=0;z>=0&&k<=top;z--,k++)
{stck2[k]=stck1[z];

}
}
void compare()
{
int counter=-1;
int l;
for(l=0;l<=top&&stck1[l]==stck2[l];l++)
++counter;
if(counter==top)
printf("palindrome");
else
printf("not a palindrome  ");
}
