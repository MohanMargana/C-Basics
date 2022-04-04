#include<stdio.h>
int main()
{
	int n,r,sum=0,ss=0,sss=0,gs;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		ss=ss+r*r;
		sss=sss+r*r*r;
		n=n/10;
		gs=sum+ss+sss;
	}
	printf("sum of digits %d\n",sum);
	printf("sum of square digits %d\n",ss);
	printf("sum of cube digits %d\n",sss);
	printf("gaint sum %d",gs);
}
