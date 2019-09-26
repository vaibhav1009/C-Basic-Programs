#include<stdio.h>

void main()
{
	int r, n, sum = 0 ;
	
	printf("Enter Number :");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum + r;
	}
	
	printf("The sum of digits of number is %d",sum);
	
}
