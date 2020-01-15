#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhapcdcr(float &cd, float &cr)
{
	printf("chieu rong la ");scanf("%f",&cd);
	printf("chieu dai la ");scanf("%f",&cr);
}
void dientichCN(float cd, float cr)
{
	float DT;
	DT=cd*cr;
	printf("Dien tich hinh chu nhat la %0.2f",DT);
}
void chuviCN(float cd, float cr)
{
	float CV;
	CV=(cd+cr)*2;
	printf("Chu vi hinh chu nhat la %0.2f",CV);
}
int main()
{
	float cd,cr;
	int chon;
	do{
		printf("===============Menu hinh chu nhat===============\n");
		printf("1. Nhap chieu dai va chieu rong\n");
		printf("2. Dien tich hinh chu nhat\n");
		printf("3. Chu vi hinh chu nhat\n");
		printf("4. Thoat\n");
		printf("ban chon: ");scanf("%d",&chon);
		switch(chon)
		{
			case 1: nhapcdcr(cd,cr);break;
			case 2:	dientichCN(cd,cr);break;
			case 3: chuviCN(cd,cr);break;
			case 4: exit(0);break;
		}
		getch();
		system("cls");
	}while(chon!=0);
}
