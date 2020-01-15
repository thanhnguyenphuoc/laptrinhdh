#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("nhap a=");scanf("%d",&a);
	printf("nhap b=");scanf("%d",&b);
	printf("nhap c=");scanf("%d",&c);
	((a+b)>c && (b+c)>a && (c+a)>b)?printf("a,b,c la 3 canh tam giac"):printf("a,b,c khong la tam giac");	
}
