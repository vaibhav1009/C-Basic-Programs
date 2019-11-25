// *********************************************************************
//   Author - Vaibhav Kagathara
//   Code :- Pascal`s Triangle
// *********************************************************************


#include<stdio.h>

void main()
{

	int no, space, row, col ,n ;
	
	printf("Enter no of rows : ");
	scanf("%d",&no);

	for(row=0; row<no; row++)
	{
		for (space=0; space<(no-row); space++)
		{
			printf(" ");
		}
		
		n=1;
		for (col=0; col<=row; col++)
		{
			printf(" %d",n);
			n=n*(row-col)/(col+1);
		}
		
		printf("\n");
	}
	
}
