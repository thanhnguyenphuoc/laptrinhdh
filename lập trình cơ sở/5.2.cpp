#include<stdio.h>
int main()
{
	int n,i,A[10],s=0 ;
	printf("nhap vao so luong phan tu mang N=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
	
		if(A[i]<0)
		{
		
			s=s+(A[i]*A[i]);
		}
	}
	printf("\ntong cac so am binh phuong la %d",s);

}
