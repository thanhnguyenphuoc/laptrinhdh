#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%10==0)
		printf("\t%d\n",i);
		else printf("\t%d",i);
	}
}
