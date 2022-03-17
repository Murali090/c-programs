#include<stdio.h>
int main ()
{
	int n,c,first,last,sum;
	scanf("%d",&n);
	last=n%10;
	while (c>1)
	{
		n=n/10;
		c=c-1;
		
	}
	{
	
	first=n%10;
	sum=last+first;
	printf("%d=%d+%d",sum,last,first);
}
}
