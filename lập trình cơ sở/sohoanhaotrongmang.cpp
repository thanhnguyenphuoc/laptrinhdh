#include<stdio.h>
int main()
{
	int A[10],n,i,j,dem;
	printf("moi nhap so phan tu cua mang : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	printf("cac so hoan hao trong mang: ");
	for(i=0;i<n;i++)
	{
		dem=0;
		for(j=1;j<A[i];j++)
			if(A[i]%j==0)
				dem=dem+j;
				if(dem==A[i])
					printf("%d\t",A[i]);		
	}	
}
