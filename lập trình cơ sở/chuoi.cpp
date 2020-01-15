#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("nhap vao chuoi: ");
	gets(str);
	//scanf("%s",str);
	printf("ket qua ban vua nhap: \n");
	puts(str);
	int Dem=0,i=0,DemTrang;
	
	for(int i=0;i<strlen(str);i++)//while(str[i]!=NULL)
	{
		Dem++;
		//i++;
		if(str[i]=='a'||str[i]=='A')DemTrang++;
		//if(str[i]==' ')DemTrang++;
	}
	printf("so ky tu trong chuoi la %d va so ky tu trang la %d",Dem,DemTrang);
	printf("\nSo ky tu trong chuoi(Dung ham strlen) la %d",strlen(str));
}
