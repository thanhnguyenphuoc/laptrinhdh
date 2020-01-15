#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("nhap so n: ");scanf("%d",&n);
	while(n<0)
	{
		printf("ban nhap sai.Moi nhap lai: ");scanf("%d",&n);
	}
	for(i=1;i<n;i++)
		if(n%i==0)
			s=s+i;
		if(n==s)
			printf("%d la so hoan hao",n);
		else
			printf("%d khong la so hoan hao",n);
}
