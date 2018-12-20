#include<stdio.h>
#include<conio.h>
int main()
{
longint n;
int count=0;
clrscr();
printf("Enter an integer to count:\n");
scanf("%ld",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("The number of digits is:%d",count);
}
return 0;
