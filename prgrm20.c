#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a;
clrscr();
printf("Enter the limit of a number:\n");
scanf("%d",&n);
printf("Enter the number:\n");
scanf("%d",&n);
printf("The numbers divisible by %d are:\n",a);
for(i=0;i<=n;i++)
{
if(i%a==0)
{
printf("%d\t",i);
}
}
getch();
}
