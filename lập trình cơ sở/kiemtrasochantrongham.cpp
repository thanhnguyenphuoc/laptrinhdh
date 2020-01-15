#include<stdio.h>
int sochan(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d, ",i);
			s++;
		}
	}
	return s;
}
int main()
{
	int n;
	printf("nhap n: ");scanf("%d",&n);
	printf("so chan la ");
	sochan(n);
}
