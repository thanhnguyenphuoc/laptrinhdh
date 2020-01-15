#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,s,p;
	while(1)
	{
		printf("nhap A = ");scanf("%d",&a);
		printf("nhap B = ");scanf("%d",&b);
		printf("nhap C = ");scanf("%d",&c);
		if((a+b)>c&&(b+c)>a&&(a+c)>b);break;
	}
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("dien tich tam giac la %d",s);
}
