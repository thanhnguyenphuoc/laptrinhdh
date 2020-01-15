#include<math.h>
#include<stdio.h>
int main()
{
	float a,b,c,s,p;
	printf("nhap a=");scanf("%f",&a);
	printf("nhap b=");scanf("%f",&b);
	printf("nhap c=");scanf("%f",&c);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("3 canh cua tam giac la %0.2f",s);	
}
