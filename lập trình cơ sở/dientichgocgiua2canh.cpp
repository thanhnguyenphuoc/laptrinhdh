#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float a,b,alpha,s;
	printf("nhap a:");scanf("%f",&a);
	printf("nhap b:");scanf("%f",&b);
	printf("nhap goc alpha:");scanf("%f",&alpha);
	alpha=alpha*M_PI/180;
	s=0.5*a*b*alpha;
	printf("dien tich la %0.2f",s);
	getch();
}
