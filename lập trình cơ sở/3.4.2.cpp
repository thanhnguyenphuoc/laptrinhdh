#include<stdio.h>
int main()
{
	int i=1,n,s=0;
	printf("nhap n: ");scanf("%d",&n);
	while(i<=n)
	{
		s=s+i;
		i++;
	}
	printf("tong s= %d",s);
	
}
