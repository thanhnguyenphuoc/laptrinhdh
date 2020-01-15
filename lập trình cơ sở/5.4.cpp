#include<stdio.h>
int main()
{
	int n,i,A[10],x,kt=0;
	printf("nhap vao so luong phan tu mang N=");scanf("%d",&n);
	printf("Moi nhap phan tu x=");scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
		if(A[i]==x)
			kt=1;
		if(kt == 0)
			printf("x  khong co trong mang");
		else printf("x co trong mang");9
	
}
