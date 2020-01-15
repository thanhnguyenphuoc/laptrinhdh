#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float n,x,kq;
	printf("nhap n:");scanf("%f",&n);
	printf("nhap x:");scanf("%f",&x);
	kq=exp(log(x)*(float)1/n);
	printf("ket qua:%0.2f",kq);
	getch();
}
