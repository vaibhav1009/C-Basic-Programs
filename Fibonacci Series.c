// *********************************************************************
//  Author - Vaibhav Kagathara
//  Code :- Fibonacci Series
//  *********************************************************************



#include<stdio.h>
void main()
{
    int n,i,a=1,b=1,c;
    
    printf("Enter number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
}

