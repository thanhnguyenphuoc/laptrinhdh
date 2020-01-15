#include<stdio.h>
int Binh_Phuong(int x)
{
	int bp; bp=x*x; return bp;
}
int main()
{
	int n;
	printf("nhap n: ");scanf("%d",&n);
	printf("In BP tu 1 den n\n");
	for(int i=1;i<=n;i++)
	{
		printf("\t %d",Binh_Phuong(i));
	}
}
