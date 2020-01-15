#include<stdio.h>
int main()
{
	int A[10],n,i,demC=0,demL=0;
	float sochan=0,sole=0;
	printf("nhap mang n phan tu: ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
		if(A[i]%2==0)
		{
			sochan=sochan+A[i];
			demC++;
		}
		else
		{
			sole=sole+A[i];
			demL++;
		}
		printf("\ntbc so chan trong mang la %0.2f",sochan/demC);
		printf("\ntbc so le trong mang la %0.2f",sole/demL);
}
