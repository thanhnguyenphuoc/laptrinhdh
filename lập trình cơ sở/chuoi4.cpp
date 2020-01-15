#include"stdio.h"
#include"string.h"
#include"conio.h"
int main()
{
	char k, nguon[10];
	printf("\nNhap vao chuoi nguon: ");
	gets(nguon);
	printf("\nMoi dung chuoi nguon la %s",nguon);
	printf("\nMuon trich ra tu ky tu nao: ");
	k=getch();
	if(strchr(nguon,k)==NULL)printf("Khong ton tai ky tu %c trong chuon %s",k,nguon);
	else printf("\nMoi dung cua chuoi trich ra la : %s",strchr(nguon,k));
	getch();
}
