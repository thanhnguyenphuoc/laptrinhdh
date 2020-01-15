#include<stdio.h>
#include<string.h>
int main()
{
	char Ho[50],Holot[10],Ten[10];
	printf("nhap vao chuoi ho: ");
	gets(Ho);
	printf("nha vao chuoi ho lot: ");
	gets(Holot);
	printf("nhap vao chuoi ten: ");
	gets(Ten);
	strcat(Ho," ");
	strcat(Ho,Holot);
	strcat(Ho," ");
	strcat(Ho,Ten);
	printf("chuoi vao  sau khi noi la:\n");
	puts(Ho); 
	//toi uu hoa strcat
}
