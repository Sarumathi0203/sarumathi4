#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
int sum=0,array[max];
clrscr();
printf("enter the value of n to sum:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[n]);
sum=sum+array[n];
}
printf("sum=%d",sum);
getch();
}
