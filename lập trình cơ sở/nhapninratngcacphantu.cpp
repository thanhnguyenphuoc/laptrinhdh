#include<stdio.h>
#define MAX 10
int main ()
{
	int A[MAX],n,i,s=0;
	printf("nhap vao so luong phan tu:");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	//in ra cac phan tu trong mang ra man hinh 
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	//tinh tong cac phan tu trong mang 
		for(i=0;i<n;i++)
			s=s+A[i];
			printf("\ntong cac PT trong mang la %d",s);
}
