#include"stdio.h"
#include"conio.h"
#include"string.h"
int main()
{
	char *hoten[30];
	char *tam;
	hoten[0]="Anh";hoten[1]="Hung";hoten[2]="Dong";hoten[3]="Han";
	for(int i=0;i<4;i++)
		for(int j=i+1;j<4;j++)
		if(strcmp(hoten[i],hoten[j])>0)
		{
			tam=hoten[i];
			hoten[i]=hoten[j];
			hoten[j]=tam;
		}
		for(int i=0;i<4;i++)
		{
			puts(hoten[i]);
		}
	getch();
}
