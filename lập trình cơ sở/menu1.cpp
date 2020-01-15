#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhapn(int &n)
{
	printf("nhap n: ");scanf("%d",&n);
}
void inchuso(int n)
{
	int tam;
	while(n!=0)
	{
		tam=n%10;
		printf("%d\t",tam);
		n=n/10;
	}
}
void tong(int n)
{
	int s=0;
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	}
	printf("tong la %d",s);
}
void sochan(int n)
{
	int sc;
	while(n!=0)
	{
		sc=n%10;
		if(sc%2==0)
			printf("%d\t",sc);
		n=n/10;
	}
}
void daonguoc(int n)
{
	int k=n,m=0;
	while(k!=0)
	{
		m=m*10+k%10;
		k=k/10;
	}
	printf("dao nguoc %d la %d",n,m);
}
void sodoixung( int n)
{
	int k=n,m=0;
	while(k!=0)
	{
		m=m*10+k%10;
		k=k/10;
	}
	if(m==n) printf("%d  la so doi xung",n);
	else printf("%d khong la so doi xung ",n);
}
void songuyento(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
		dem++;
		if(dem==2) printf("%d la so nguyen to",n);
		else printf("%d khong la so nguyen to",n);
}
void insonguyento(int n)
{
	for(int i=1;i<=n;i++)
	{
		int dem=0;
		for(int j=1;j<n;j++)
		{
			if(i%j==0)
				dem++;
		}
			if(dem==2)
				printf("%d\t",i);		
	}
}
void sohoanhao(int n)
{
	int dem=0;
	for(int i=1;i<n;i++)
		if(n%i==0)
			dem=dem+i;
		if(n==dem)	printf("%d la so hoan hao",n);
		else printf("%d khong la so hoan hao",n);
}
int main()
{
	int n,chon;
	do{
		printf("========Menu chuong trinh=========\n");
		printf("1. nhap gia tri n\n");
		printf("2. in ra chu so\n");
		printf("3. tinh tong\n");
		printf("4. so chan\n");
		printf("5. dao nguoc\n");
		printf("6. so doi xung\n");
		printf("7. so nguyen to\n");
		printf("8. in ra so nguyen to\n");
		printf("9. kiem tra so hoan hao\n");
		printf("0. Thoat\n");
		printf("ban chon:");scanf("%d",&chon);
		switch(chon)
		{
			case 1: nhapn(n);break;
			case 2: inchuso(n);break;
			case 3: tong(n);break;
			case 4: sochan(n);break;
			case 5: daonguoc(n);break;
			case 6: sodoixung(n);break;
			case 7: songuyento(n);break;
			case 8: insonguyento(n);break;
			case 9: sohoanhao(n);break;
		}
		getch();
		system("cls");
	}while(chon!=0);
}
