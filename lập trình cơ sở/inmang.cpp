// chuong trinh nhap mang in mang
#include<stdio.h>
int main()
{
	int n,i,A[10];
	printf("nhap vao so luong phan tu mang N=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}
