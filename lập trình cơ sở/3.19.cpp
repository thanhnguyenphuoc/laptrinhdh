#include<stdio.h>
int main()
{
	int n,S0=0,i;
	printf("nhap n: ");scanf("%d",n);
	for(i=1;i<=n;i++)
		S0=S0*i;
	printf("tong s=%d",S0);
}
