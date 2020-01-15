#include<stdio.h>
#include<conio.h>
void nhapmang(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
}
void inmang(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}
void tong(int A[],int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		s=s+A[i];
	}
	printf("\ntong cac phan tu la %d",s);
}
void lonnhat(int A[],int n)
{
	int max=A[0];
	for(int i=0;i<n;i++)
	{
		if(max<A[i])
		{
			max=A[i];
		}
	}
	printf("\nphan tu lon nhat cua mang la %d",max);
}
void timx(int A[],int n)
{
	int x,KT=0;
	printf("\nnhap x: ");scanf("%d",&x);
	for(int i=0;i<n;i++)
		if(A[i]==x)
		 	KT=1;
		if(KT==0) 
			printf("khong co x trong mang A");
		else 
			printf("co x trong mang A");
}
int main()
{
	int n,A[100];
	printf("nhap n: ");scanf("%d",&n);
	nhapmang(A,n);
	inmang(A,n);
	tong(A,n);
	lonnhat(A,n);
	timx(A,n);
	getch();
}
