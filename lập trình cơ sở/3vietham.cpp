#include<stdio.h>
#include<conio.h>
void inchuso(int n)
{
	while(n!=0)
	{
		int tam=n%10;
		printf("%d\t",tam);
		n=n/10;
	
	}
}
void tongchuso(int n)
{
	int s=0;
	while(n!=0)
	{
		s=s+n%10;
		n=n/10;
	
	}
	printf("\ntong chu so la %d",s);

}
void tongsole(int n)
{
	int s=0,tam;
	while(n!=0)
	{
		tam=n%10;
		if(tam%2!=0)
			{
				s=s+tam;
		    }
		n=n/10;
	}
	printf("\ntong so le la %d",s);
}
void sodoixung(int n)
{
	int m=0,k=n;
	while(k!=0)
	{
		m=m*10+k%10;
		k=k/10;
	}
	if(n==m)
		printf("\n%d la so doi xung",n);
	else
		printf("\n%d khong la so doi xung",n);
}
int main()
{
	int n;
	printf("nhap n: ");scanf("%d",&n);
	inchuso(n);
	tongchuso(n);
	tongsole(n);
	sodoixung(n);
	getch();
}

