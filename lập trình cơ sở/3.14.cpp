#include<stdio.h>
int main()
{
	int n,dem=0,s=0;
	printf("nhap n: ");scanf("%d",&n);
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
		dem++;
	}
	printf("chu so la %d",dem);
	printf("\ntong cac chu so la %d",s);
}
