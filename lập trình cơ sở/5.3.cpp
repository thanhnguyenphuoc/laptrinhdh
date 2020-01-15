#include<stdio.h>
int main()
{
	int n,i,A[10],j,tam;
	printf("nhap vao so luong phan tu mang N=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	for(i=0;i<n-1;i++)
	{
	
		for(j=i+1;j<n;j++)
		{
		
		if(A[i]>A[j])
		{
		
			tam=A[i];
			A[i]=A[j];
			A[j]=tam;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}	
}
