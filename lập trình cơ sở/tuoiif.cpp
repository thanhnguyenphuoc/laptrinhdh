#include<stdio.h>
int main()
{
	int tuoi;
	printf("tuoi = ");scanf("%d",&tuoi);
	if(tuoi<1||tuoi>120)
		printf("ban nhap sai");
	else if(tuoi<18)
		printf("thieu nien");
	else if(tuoi<39)
		printf("thanh nien");
	else if(tuoi<60)
		printf("trung nien");
	else
		printf("lao nien");
}
