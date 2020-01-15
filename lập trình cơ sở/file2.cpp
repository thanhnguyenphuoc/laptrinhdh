#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f;
	char c[20];
	printf("Minh hoa ham fgets()\n");
	f=fopen("D:\\HOCTAP\\CS11.txt","rt");
	while(fgets(c,20,f))
	{
		printf("%s",c);
	}
	fclose(f);
	getch();
}
