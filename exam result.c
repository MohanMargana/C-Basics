#include<stdio.h>
void main()
{
	int e,m,p,ch,cs,total;
	printf("enter the marks for e,m,p,ch,cs");
	double perc;
	scanf("%d %d %d %d %d",&e,&m,&p,&ch,&cs);
	total = e+m+p+ch+cs;
	per = total*1.0/5;
	
	if(e>=35 && m>=35 && p>=35 && ch>=35 && cs>=35)
	{
		printf("result:pass\n");
		printf("total marks out of 500n %d\n",total);
		printf("percentage: %if\n",per);
		printf("grade:");
	}

	if(per>=90)
	{
		printf("o");
	}
		if(per>=80)
	{
		printf("a");
	}
		if(per>=70)
	{
		printf("b");
	}
		if(per>=60)
		
	{
		printf("o");
	}	if(per>=90)
	{
		printf("o");
	}	if(per>=90)
	{
		printf("o");
	}
	
	
}
