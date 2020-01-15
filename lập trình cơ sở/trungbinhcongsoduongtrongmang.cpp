#include<stdio.h>
int main()
{
	int n,i,A[10],s=0,dem=0 ;
	printf("nhap vao so luong phan tu mang N=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
	
		if(A[i]>0)
		{
			s=s+A[i];
			dem++;
		}
	}
	printf("\ntbc cac so duong  la %d",s/dem);
}
