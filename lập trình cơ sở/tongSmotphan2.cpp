#include<stdio.h>
int main() 
{
    float s=0,n,i;
	printf("nhap n: ");scanf("%f",&n);
	for(i=1;i<=n;i++)
		s=s+1/(i);
	printf("tong S=%0.1f",s); 
}
