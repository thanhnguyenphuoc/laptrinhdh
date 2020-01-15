#include<stdio.h>
int main()
{
	int i,s=0,n,j=0;
	printf("nhap n: ");scanf("%d",&n);
	printf("so le ");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d, ",i);
			s++;
			j=j+i;
		}
	}
	printf("\ntong so le la: %d",j);
}
