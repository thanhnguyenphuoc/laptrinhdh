#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
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
	printf("tong la %d",s);
}
void lonnhat(int A[],int n)
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
	int x,KT=0;
	printf("nhap x: ");scanf("%d",&x);
	for(int i=0;i<n;i++)
		if(A[i]==x)
			KT=1;
		if(KT==0) printf("x  khong ton  tai trong mang A");
		else printf("x  ton tai trong mang A");
}
void hoanvi(int &a, int &b)
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
void xoa_VTK(int A[], int &n, int k)
{
	for(int i=k;i<n;i++)
	{
		A[i]=A[i+1];
	}
	n--;
}
void nhap_K_xoa(int A[], int &n)
{
	int k;
	do{
		printf("nhap k= ");scanf("%d",&k);
	}while(k<0||k>n+1);
	xoa_VTK(A,n,k);
}
void chen_M_K(int A[], int &n, int M, int k)
{
	for(int i=n; i>k; i--)
	{
		A[i]=A[i-1];	
	}
	A[k]=M;
	n++;
}
int TK(int A[], int n, int M)
{
	for(int i=0; i<n; i++)
	if(M<=A[i])
	return i;
	return n;
}
void Tach_Mang(int A[], int n, int MANGC[],int &nc, int MANGL[], int &nl)
{
	nc=0;nl=0;
	for(int i=0; i<n; i++)
	if(A[i]%2==0)
	{
		MANGC[nc]=A[i];
		nc++;
	}
	else
	{
		MANGL[nl]=A[i];
		nl++;
	}
}
int main()
{
	int A[10],n,chon,k,MANGC[10],MANGL[10],nc,nl;
	do{
		printf("=========MENU CHUONG TRINH==========\n");
		printf("1. Nhap mang\n");
		printf("2. In mang\n");
		printf("3. Tinh tong\n");
		printf("4. Lon nhat\n");
		printf("5. Tim x\n");
		printf("6. sap xep theo thu tu tang dan\n");
		printf("7. Xoa  o vi tri phan tu K\n");
		printf("8. Chen M vao vi tri K\n");
		printf("9. chen M vao mang\n");
		printf("10. Tach A thanh 2 mang chan,le\n");
		printf("0. thoat\n");
		printf("Ban chon cong viec thuc hien=");scanf("%d",&chon);
		switch(chon)
		{
			case 1: printf("nhap n: ");scanf("%d",&n);nhapmang(A,n);break;
			case 2: inmang(A,n);break;
			case 3:  tong(A,n);break;
			case 4:  lonnhat(A,n);break;
			case 5:  timx(A,n);break;
			case 6:  sapxep(A,n);inmang(A,n);break;
			case 7:  nhap_K_xoa(A,n);printf("ket qua sau khi xoa K la\n");inmang(A,n);break;
			case 8:  chen_M_K(A,n,100,2);printf("Mang sau khi chen la\n");inmang(A,n);break;
			case 9:  int M;printf("nhap vao gia tri can chen: ");scanf("%d",&M);
						k=TK(A,n,M);chen_M_K(A,n,M,k);
					 printf("mang sau khi chen la ");inmang(A,n);break;
			case 10: Tach_Mang(A,n,MANGC,nc,MANGL,nl);
					printf("Mang chan la ");inmang(MANGC,nc);
					printf("\nMang le la ");inmang(MANGL,nl);break;	
		}
		getch();
		system("cls");
	}while(chon!=0);
}
