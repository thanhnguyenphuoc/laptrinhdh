#include<stdio.h>
#include<conio.h>
int main()
{
	int n;long s=0;
	printf("nhap n=");scanf("%d",&n);
	while(n<1)
	{
		printf("nhap n=");scanf("%d",&n);
	}
	for(int i=1;i<=n;i++)
		s=s+i;
	if(n==1) printf("\ns=%ld",s);
	else printf("\n+s=1+......+%d=%ld",n,s);
	getch();
}
