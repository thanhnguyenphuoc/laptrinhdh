#include<stdio.h>
int main()
{
	int a;
	printf("nhap vao gia tri a=");scanf("%d",&a);
	if(a<0)
		printf("ban nhap sai");
	else if(a%2==0)
		printf("a la so chan");
	else
		printf("a la so le ");
}
