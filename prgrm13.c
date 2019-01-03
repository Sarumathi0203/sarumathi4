#include<stdio.h>
int main()
{
int count=0,num,i;
clrscr();
printf("enter a number:\n");
scanf("%d",&num);
for(i=2;i<num/2;i++);
{
if(num%i==0)
{
count++;
break;
}
}
if(count==0 && num!=1)
{
printf("%d is a prime number",num)
}
else
{
printf("%d is not a prime number",num)
}
return 0;
}
