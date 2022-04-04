#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,edc=0,odc=0,c=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0)
		{
			edc++;
		}
		else
		{
			odc++;
		}
		n=n/10;
		c++;
	}
	if(edc==c) printf("complete even");
	else if(odc==c) printf("complete odd");
	else printf("mixed");

}
