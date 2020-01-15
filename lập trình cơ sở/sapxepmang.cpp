#include<stdio.h>
int main()
{
	int A[]={1,3,7,2,9,4,3};
	int n=6,i,j,tam;
	for( i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(A[i]>A[j])
				{
					tam=A[i],A[i]=A[j];
					A[j]=tam;
				}
		for(i=0;i<n;i++)
		printf("%d\t",A[i]);		
}
