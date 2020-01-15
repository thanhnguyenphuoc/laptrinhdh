#include<stdio.h>
int main()
{
	int n,i,A[10];
	printf("nhap vao so luong phan tu mang N=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	printf("Cac so chan la ");
	for(i=0;i<n;i++)
	{
		if(A[i]%2==0)
			printf("%d\t",A[i]);
	}
	printf("\nCac so le la ");
	for(i=0;i<n;i++)
	{
		if(A[i]%2!=0)
			printf("%d\t",A[i]);
	}
}	
