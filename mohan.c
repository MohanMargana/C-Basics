#include <stdio.h>
void main()
{
	int n,nat,even,odd;
	n = 5;
	nat = n*(n+1)/2;
	even = n*(n+1);
	odd = n*n;
	
	printf("sum of %d natural numbers = %d\n",n,nat);
	printf("sum of %d natural numbers = %d\n",n,even);
	printf("sum of %d natural numbers = %d\n",n,odd);
	
}
