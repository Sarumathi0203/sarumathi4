#include<stdio.h>
int main()
{
int n,i;
unsigned long factorial=1;
printf("Enter an integer to find the factorial:\n");
scanf("%d",&n);
if(n<0)
{
printf("Error!Factorial of a negative number does not exist!\n");
}
else
{
for(i=1;i<=n;i++)
{
factorial*=i;
}
printf("factorial of %d= %lu",n,factorial);
}
return 0;
}
