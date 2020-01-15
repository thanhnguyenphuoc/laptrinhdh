#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *hoten[30]=("Nguyen van Anh","Nguyen Hung Lan","Phan Ngoc Nguyen","Nguyen Hoang Ha");
	int i, dem=0;
	printf("Danh sach nhan vien\n");
	for(i=0;i<4;i++)
	(printf("\n %2d %s",dem+1,hoten[i]);dem++)
	printf("\n So nguoi co ho nguyen la \n");
	dem=0;
	for(int i=0;i<4;i++)
	if(strstr(hoten[i]),"Nguyen")!=NULL)// Neu hoten[i] co ho la Nguyen thi in ra
	{
		printf("\n 2%d %s",dem=1,hoten[i]);
		dem++;
	}
	printf("\n Tong do nguoi cung ho Nguyen la %d",dem);
	getch();
}
