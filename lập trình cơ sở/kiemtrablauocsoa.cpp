#include<stdio.h>
int main()
{
	int a,b;
	printf("nhap vao gia tri a=");scanf("%d",&a);
	printf("nhap vao gia tri b=");scanf("%d",&b);
	if(a%b==0)
		printf("%d la uoc so cua %d",b,a);
	else
		printf("%d khong phai la uoc so cua %d",b,a);
}
