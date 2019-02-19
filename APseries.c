#include<stdio.h>
#include<stdlib.h>
int main()
{
int terms,first,diff,value,sum=0;i;
clrscr();
printf("Enter the no. of terms in AP series:\n");
scanf("%d",&terms);
printf("Enter the first term and diff :\n");
scanf("%d%d",&first,&diff);
value=first;
printf("AP SERIES:\n");
for(i=0;i<terms;i++)
{
printf("%d",&value);
sum+=value;
value=value+diff;
}
printf("Sum of the AP series till %d terms is %d :\n",&terms,&diff);
return 0;
}
