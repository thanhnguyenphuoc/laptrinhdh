#include<stdio.h>
int main()
{
	float a,b,x;
	printf("nhap vao gia tri a=");scanf("%f",&a);
	printf("nhap vao gia tri b=");scanf("%f",&b);
	if(a==0)
	{
		if(b==0)
			printf("PTVSN");
		else
			printf("PTVN");
	}
	else
	{
		x=-b/a;
		printf("phuong trinh co nghiem x =%0.2f",x);
	}
}
