#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int fact(int);
void main()
{
int f,a;
clrscr();
printf("enter the number = ");
scanf("%d",&f);
a=fact(f);
printf("the factorial is = %d",a);
getch();
}
int fact(int b)
{
if(b==1)
return 1;
else
return b*fact(b-1);
}