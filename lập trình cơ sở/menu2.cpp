#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void nhap(int A[], int &n)
{
	printf("nhap n: ");scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
}
void inmang(int A[], int n)
{
	for(int i=0;i<n;i++)
	{
	 	printf("%d\t",A[i]);
	}
}
void tongbinhphuong(int A[], int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2!=0)
		 	s=s+A[i]*A[i];
	}
	printf("tong cac phan tu le binh phuong la %d",s);
}
void lonnhat(int A[], int n)
{
	int max=A[0];
	for(int i=0;i<n;i++)
	{
		if(max<A[i])
			max=A[i];
	}
	printf("lon nhat la %d",max);
}
void timx(int A[],int n)
{
	int x,KT=0,vt=0;
	printf("nhap x: ");scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(A[i]==x)
		{
			KT=1;
			vt=i;
		}
	}
	if(KT==0) printf("%d khong ton tai trong mang",x);
	else printf("%d ton tai trong mang va nam o vi tri %d",x,vt+1);	
}
void xoaK(int A[],int n)
{
	int k;
	printf("xoa vi tri k: ");scanf("%d",&k);
	for(int i=k-1;i<n-1;i++)
	{
		A[i]=A[i+1];	
	}
	n--;
	for(int i=0;i<n;i++)
	printf("\nA[%d]= %d",i+1,A[i]);
}
int main()
{
	int A[10],n,chon;
	do{
		printf("==========Menu mang===========\n");
		printf("1. nhap mang\n");
		printf("2. in mang\n");
		printf("3. tong cac phan tu le binh phuong\n");
		printf("4. lon nhat\n");
		printf("5. tim x co ton tai trong mang hay khong\n");
		printf("6. xoa phan tu k\n");
		printf("0. thoat\n");
		printf("ban chon: ");scanf("%d",&chon);
		switch(chon)
		{
			case 1: nhap(A,n);break;
			case 2: inmang(A,n);break;
			case 3: tongbinhphuong(A,n);break;
			case 4: lonnhat(A,n);break;
			case 5: timx(A,n);break;
			case 6: xoaK(A,n);break;
		}
		getch();
		system("cls");
	}while(chon!=0);
}
