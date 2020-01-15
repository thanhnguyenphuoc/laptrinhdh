#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("Nhap a : ");scanf ("%d",&a);	
    printf ("Nhap b : ");scanf ("%d",&b);
    printf ("Nhap c : ");scanf ("%d",&c);
    if(b%a==0)
	{
		if(c%a==0)
			printf("a la uoc so cua b va c ");
		else
			printf("a la uoc so cua b va a khong hai la uoc so cua c");
	}
	else if (c%a==0)
		printf("a la uoc so cua c va a khong phai la uoc so cua b");
	else
		printf("a khong phai la uoc so cua hai ");
}
