#include<stdio.h>
void main()
{
	int n;
	printf("enter a number to check divisibility");
	scanf("%d",&n); 
	
	if (n%1 == 0)
	{
		printf("%d divisible by 1\n",n);
	}
	if(n%2 == 0)
	{
		printf("%d divisible by 2\n",n);
	}
	if(n%3 == 0)
	{
		printf("%d divisible by 3\n",n);
	}
	if(n%4 == 0)
	{
		printf("%d divisible by 4\n",n);
	}
	if(n%5 == 0)
	{
		printf("%d divisible by 5\n",n);
	}
	if(n%6 == 0)
	{
		printf("%d divisible by 6\n",n);
	}
	
}

