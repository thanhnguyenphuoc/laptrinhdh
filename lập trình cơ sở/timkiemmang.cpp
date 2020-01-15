#include<stdio.h>
int main()
{
	int A[]={1,3,7,2,9,4,3};
	int x=11,n=6,KT=0;
	for(int i =0;i<n;i++)
		if(A[i]==x)
			KT=1;
		if(KT==0)printf("x khong co trong A");
		else printf("x co trong A");
}
