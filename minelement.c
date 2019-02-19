#include<stdio.h>
int main()
{
int n,i,arr[n];
clrscr();
printf("Enter the no.of elements:\n");
scanf("%d\n",&n);
printf("Enter number %d:\n",i+1)
scanf("%d\n",arr[i]);
minimum=arr[0];
for(i=1;i<=n;i++)
{
if(arr[i]<minimum)
{
minimum=arr[i];
}
printf("The minimum element is %d:\n",arr[i]);
}
return 0;
}
