#include<stdio.h>
#define MAX 10
int main ()
{
	int A[MAX],n,i;
	printf("nhap vao so luong phan tu:");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	//in ra cac phan tu trong mang ra man hinh(cho dep)
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	//tim so chan cac phan tu trong mang 
		for(i=0;i<n;i++)
			if(A[i]%2==0)
			printf("\ncac so chan trong mang la %d",A[i]);
}
