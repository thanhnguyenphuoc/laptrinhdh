#include<stdio.h>
int main()
{
	int  n,i,s=0;
	printf("nhap so n: ");scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(n%i==0)
			s++;
		if(s==2)
			printf("%d la so nguyen to",n);
		else
			printf("%d khong la so nguyen to",n);			

}
