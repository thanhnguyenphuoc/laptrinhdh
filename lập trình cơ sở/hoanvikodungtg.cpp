#include<stdio.h>
int main()
{
	int a,b;
	printf("nhap a=");scanf("%d",&a);
	printf("nhap b=");scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a= %d",a);
	printf("\nb= %d",b);	
}
