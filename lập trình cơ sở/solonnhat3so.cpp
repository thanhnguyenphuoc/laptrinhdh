#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("nhap a=");scanf("%d",&a);
	printf("nhap b=");scanf("%d",&b);
	printf("nhap c=");scanf("%d",&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("max=%d",max);	
}
