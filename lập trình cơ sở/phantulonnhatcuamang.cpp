#include<stdio.h>
#define MAX 10
int main ()
{
	int A[MAX],n,i,max;
	printf("nhap vao so luong phan tu:");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	//in ra cac phan tu trong mang ra man hinh 
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	//tim max 
		max=A[0];
		for(i=0;i<n;i++)
		{
			if(max<A[i])
			max=A[i];
		}
		printf("\nso lon trong mang la %d",max);
}
