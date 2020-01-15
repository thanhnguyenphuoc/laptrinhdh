#include<stdio.h>
int main()
{
	int A[10],n,i;
	printf("nhap vao so phan co trong mang: ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	while(A[0]!=A[n-1])
	{
		if(A[0]>A[n])
			A[0]=A[0]-A[n-1];
		else
			A[n-1]=A[n-1]-A[0];
	}
	printf("USCLN la: %d",A[0]);
}
