#include<stdio.h>
int main()
{
int n,num,rem,sum=0;
clrscr();
printf("Enter a number to check:\n")
scanf("%d\n",&n);
num=n;
while(num!=0)
{
rem=num%10;
sum=sum+rem*rem*rem;
num=num/10;
}
if(sum==n)
{
printf("yes, %d is an armstrong number!\n",n);
}
else
{
printf("no, %d is not an armstrong number!\n",n);
}
return 0;
}
