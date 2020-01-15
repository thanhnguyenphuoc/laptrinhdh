#include<stdio.h>
int main()
{
	float tb; char tensv[10];
	printf("nhap ten sinh vien");scanf("%s",&tensv);
	printf("nhap diem tb ");scanf("%f",&tb);
	tb<5?printf("xep loai yeu"):tb<6.5?printf("xep loai trung binh"):tb<8?printf("xep loai kha"):printf("xep loai gioi");
}
