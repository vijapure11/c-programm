#include<stdio.h>
main()
{
	//armstrong number.
	int n,r,sum=0,temp; 
	printf("\n enter n= ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==temp)
	{
		printf("\n armstrong number");
	}
	else
	{
		printf("\n not armstrong number");
	}
}
