#include<stdio.h>
int main()
{
int n,remainder,revint=0,origint;
origint=n;
clrscr();
printf("enter a value:\n");
scanf("%d",&n);
remainder=n%10;
revint=revint*10+remainder;
n/=10;
if(origint==revint)
{
printf("%d is a palindrome.",origint);
}
else
{
printf("%d is not a palindrome.",origint);
}
return 0;
}
