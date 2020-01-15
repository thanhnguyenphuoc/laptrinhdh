#include<stdio.h>
int main()
{
	float DC=0,DL=0,TC=0,TL=0;
	int n;
	do{
		printf("nhap n: ");scanf("%d",&n);
	if(n!=0)
	{
		if(n%2==0)
		{
			DC++;
			TC=TC+n;
		}
			else
		{
			DL++;
			TL=TL+n;
		}
	}
	}while(n!=0);
	printf("trung binh cong tong chan la %0.2f",TC/DC);
	printf(" trung binh le la %0.2f",TL/DL);
}
