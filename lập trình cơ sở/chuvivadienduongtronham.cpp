#include<stdio.h>
#include<math.h>
float DienTich_DT(float r)
{
	float DT;
	DT=r*r*M_PI;
	return DT;
}
float ChuVi_DT(float r)
{
	float CV;
	CV=r*2*M_PI;
	return CV;
}
int main()
{
	float r;
	printf("nhap r: ");scanf("%f",&r);
	printf("\nDien tich duong tron la %0.2f",DienTich_DT(r));
	printf("\nChu vi duong tron la %0.2f",ChuVi_DT(r));
}
