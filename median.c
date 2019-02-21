#include<stdio.h>
#includde<conio.h>
void main()
{
int a[100],i,n;
float m;
printf("Enter the size of an array:\n");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(a%2==0)
{
m=(a[n-1/2]+(a[n/2]))/2;
}
else
{
m=a[n/2];
}
printf("\nMedian is %f",m);
getch();
}
