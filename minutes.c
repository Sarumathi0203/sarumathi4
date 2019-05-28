#include <stdio.h>
int main() 
{
	int sec, h, m, s;
	printf("Input minutes: ");
	scanf("%d", &m);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	printf("H:M - %d:%d\n",h,m);
	
	return 0;
}
