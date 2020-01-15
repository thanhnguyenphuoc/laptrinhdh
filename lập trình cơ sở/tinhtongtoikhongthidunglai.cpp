#include<stdio.h>
#include<conio.h>
int main()
{
	int x;long s=0;
	printf("nhap x=");scanf("%d",&x);
	while(x!=0)
	{
		s=s+x;
		printf("nhap x =");scanf("%d",&x);
	}
	printf("\n s=%ld",s);
	getch();
}    
