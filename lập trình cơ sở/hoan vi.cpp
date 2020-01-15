#include<stdio.h>
int main()
{
	int a,b;
	printf("nhap a=");scanf("%d",&a);
	printf("nhap b=");scanf("%d",&b);
	int temp=a;
	a=b;
	b=temp;
	printf("a= %d",a);
	printf("\nb= %d",b);	
}
