#include<stdio.h>
int main()
{
	int n,i,a,max=0;
	printf("nhap so n: ");scanf("%d",&n);
	while(n<=99||n>=1000)
	{
		printf("ban nhap sai.Moi nhap lai: ");scanf("%d",&n);
	}
	while(n!=0)
	{
		a=n%10;
		if(a>max)
		{
			max=a;
		}
		n=n/10;
	}
	printf("so lon nhat trong 3 so la %d",max);
}
