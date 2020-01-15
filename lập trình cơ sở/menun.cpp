#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhapn(int &n)
{
	printf("nhap n: ");scanf("%d",&n);
}
void inchuso(int n)
{
	while(n!=0)
	{
		int tam=n%10;
		printf("%d\t",tam);
		n=n/10;
	}
}
void tong(int n)
{
	int  s=0;
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;		
	}
	printf("tong la %d",s);
}
int main()
{
	int n,chon;
	do{
		printf("===========Menu n===========\n");
		printf("1.nhap n\n");
		printf("2.in ra chu so n ra man hinh\n");
		printf("3.tinh tong cac chu so co trong\n");
		printf("4. Thoat\n");
		printf("ban chon: ");scanf("%d",&chon);
		switch(chon)
		{
			case 1: nhapn(n);break;
			case 2: inchuso(n);break;
			case 3: tong(n);break;
			case 4: exit(0);break;
		}
		getch();
		system("cls");
	}while(chon!=0);
}
