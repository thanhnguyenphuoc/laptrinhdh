#include<stdio.h>
int main()
{
	int A[10],n,i,dem=0,dema=0;
	printf("moi nhap so phan tu cua mang : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		if(A[i]>0)
			dem++;
		else
			dema++;
	}
	printf("\nmang A so duong la %d",dem);
	printf("\nmang A co so am la %d",dema++);
}
