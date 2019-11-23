#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int fib(int);
void main()
{
int n;
clrscr();
printf("enter the number = ");
scanf("%d",&n);
printf("the sum of the fiboncci serirs is equal to = %d",fib(n));
getch();
}
int fib(int k)
{
if(k<=1)
return k;
else
return fib(k-1)+fib(k-2);
}
