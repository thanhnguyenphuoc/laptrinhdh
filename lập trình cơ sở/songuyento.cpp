#include<stdio.h>
int main()
{
	int n,i,dem=0;
	printf("nhap so n: ");scanf("%d",&n);
	while(n<2)
	{
		printf("ban nhap sai.Moi nhap lai: ");scanf("%d",&n);
	}
	for(i=1;i<=n;i++)
		if(n%i==0)
			dem++;
		if(dem==2)
			printf("%d la so nguyen to",n);
		else
			printf("%d khong la so nguyen to",n); 
}
