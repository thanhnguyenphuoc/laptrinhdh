#include<stdio.h>
int main ()
{
	int A[10],n,i;
	printf("nhap vao so luong phan tu:");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	//in ra cac phan tu trong mang ra man hinh (cho dep)
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	//tim so duong cac phan tu trong mang 
		for(i=0;i<n;i++)
			if(A[i]>0)
			printf("\ncac so duong trong mang la %d",A[i]);
}
