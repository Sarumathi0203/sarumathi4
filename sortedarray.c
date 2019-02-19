#include<stdio.h>
int main()
{
int n,arr[i],i,j,a;
printf("Enter the no.of elements in an array:\n");
scanf("%d",&n);
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",arr[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
arr[i]>arr[j]
{
a=arr[i];
arr[i]=arr[j];
arr[j]=a;
}
}
}
printf("The elements in sorted order are:\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
return 0;
}
