#include<stdio.h>
#include<conio.h>
void main()
{
int rem,i,intr1,intr2;
clrscr();
printf("enter the two intervals:\n");
scanf("%d,%d",&intr1,intr2);
printf("The even numbers between %d and %d are:\n",intr1,intr2);
for(i=intr1;i<=intr2;i++)
{
rem=i%2;
if(rem==0)
{
printf("\n%d",i);
}
}
getch();
}
