#include<stdio.h>
int main()
{
	float dtb;
	printf("nhap vao diem trung binh = ");scanf("%f",&dtb);
	if(dtb<0||dtb>10)
		printf("ban nhap sai");
	else if(dtb<5)
		printf("yeu");
	else if(dtb<7)
		printf("trung binh");
	else if(dtb<8)
		printf("kha");
	else
		printf("gioi");
}
