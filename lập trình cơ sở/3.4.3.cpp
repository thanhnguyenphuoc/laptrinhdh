#include<stdio.h>
int main()
{
	int n,s=0,i=1;
	printf("nhap n= ");scanf("%d",&n);
	do
	{
		s=s+i;
		i++;
	}while(i<=n);
	printf("tong s=%d",s);	
}
