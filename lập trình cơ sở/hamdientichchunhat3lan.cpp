#include<stdio.h>
float DienTich_HCN(float cd,float cr)
{
	float DT;
	DT=cd*cr;
	return DT;
}
int main()
{
	float cd,cr;
	for(int i=1;i<=3;i++)
	{
	printf("nhap cd: ");scanf("%f",&cd);
	printf("nhap cr:");scanf("%f",&cr);
	printf("\ndien tich la %f ",DienTich_HCN(cd,cr));
	}
}
