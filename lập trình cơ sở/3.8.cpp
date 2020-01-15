#include<stdio.h>
int main()
{
	int  n,i,s=0;
	printf("nhap so n: ");scanf("%d",&n);
	printf("cac uoc so n: ");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			printf("%d, ",i);
			s++;			
	}
}
