#include<stdio.h>
void main()
{
	int s,l;
	printf("enter the number");
	scanf("%d %d",&s,&l);
	if(s<l)
	{
		printf("%d is the largest number",l);
	}
	else if(s>l)
	{
		printf("%d is the largest number",s);
	}
}
	
