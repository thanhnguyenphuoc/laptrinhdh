#include<stdio.h>
int main()
{
	int n,i,A[10],vt=0,max;
	printf("nhap vao so luong phan tu mang N=");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	max=A[0];
	for(i=0;i<n;i++)
		if(max<A[i])
		{
			max=A[i];
			vt=i;
		}
		printf("\nvi tri so lon nhat la %d",vt+1);
		printf("\nso lon nhat la %d",max);
	
}
