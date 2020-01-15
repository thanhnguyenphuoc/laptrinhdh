#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,bscnn;
	printf("nhap a: ");scanf("%d",&a);
	printf("nhap b: ");scanf("%d",&b);
	a=abs(a);//gia tri tuyet doi
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
		bscnn=(a*b)%a;
	}
	printf("uoc so chung la %d",a);
	printf("\ntim so bscnn la %d",bscnn);
}
