#include<stdio.h>
int main()
{
	int i,s=0,n;
	printf("nhap n: ");scanf("%d",&n);
	printf("uoc so:  ");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d, ",i);
			s++;
		}
	}
	printf("\ntong so le la: %d",s);
}     

