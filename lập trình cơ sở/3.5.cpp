#include<stdio.h>
int main()
{
	int n,x,s=0,i;
	printf("moi nhap n = ");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("nhap so nguyen thu%d:",i);
		scanf("%d",&x);
		s=s+x;
	}
	printf("tong cua %d cac so nguyen la %d",n,s);
}
