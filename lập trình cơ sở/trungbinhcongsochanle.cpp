#include<stdio.h>
int main()
{
	int A[10],n,i,SL=0,SC=0,dem=0,dema=0;
	printf("moi nhap so phan tu cua mang : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	
		if(A[i]%2==0)
		{
			SC=SC+A[i];			
			dem++;
		}
		else
		{
			SL=SL+A[i];
			dema++;
		}
	printf("\ntrung binh cong so chan la %d",SC/dem);
	printf("\ntrung binh cong so le la %d",SL/dema);
}
