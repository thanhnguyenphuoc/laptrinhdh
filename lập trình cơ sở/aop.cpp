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
int duavaomang(int A[],int n)
{
	int i=0;
	while(n!=0)
	{
		int tam=n%10;
		A[i]=tam;
		n=n/10;
		i++;
	}
	return i;
}
int inmang(int A[],int n)
{
	for(int i=0;i<n;i++)
		printf(" %d\t",A[i]);
}
void hoanvi(int &a,int &b)
{
	int tam=a;a=b;b=tam;
}
void sapxep(int A[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		if(A[i]>A[j])
		{
			hoanvi(A[i],A[j]);
		}
}
int main()
{
	int n,m,A[10];
	printf("nhap n: ");scanf("%d",&m);
	inchuso(m);
	tongchuso(m);
	tongsole(m);
	sodoixung(m);
	n=duavaomang(A,m);
	sapxep(A,n);
	printf("\nket qua sau khi SX la ");
	inmang(A,n);
	getch();
}
