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
    	{
    		printf("%d la uoc so cua %d",a,b);
			printf("\n%d la uoc so cua %d",a,c);	
		}
    	else
    	{
    		printf("%d la uoc so cua %d",a,b);
    		printf("\n%d khong phai la uoc so %d",a,c);
    		
		}
	}
	else
	{
		if(c%a==0)
		{
			printf("%d la uoc so cua %d",a,c);
			printf("\n%d khong phai la uoc so %d",a,b);
		}
		else
		{
			printf("%d khong phai la uoc so %d",a,b);
			printf("\n%d khong phai la uoc so %d",a,c);
		}
	}
}

