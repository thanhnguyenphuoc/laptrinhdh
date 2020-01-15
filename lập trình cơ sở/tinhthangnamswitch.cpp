#include<stdio.h>
int main()
{
	int thang;
	printf("nhap so thang=");scanf("%d",&thang);
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("thang X co 31 ngay ");
		break;
		case 4: case 6: case 9: case 11:
		printf(" thang X co 30 ngay");
		break;
		case 2:
			int nam;
			printf("nhap so nam:");scanf("%d",&nam);
			if(nam%100!=0 && nam%4 ==0 || nam%400==0)
				printf("thang 2 co 29 ngay");
			else 
				printf("thang 2 co 28 ngay");
			break;
		default: printf("Ban nhap sai");
	}
}
