#include<stdio.h>
int main()
{
    int i,n;
	printf("nhap vao n:");scanf("%d",&n);
	while(n<0||n>9)
	{
		printf("ban cuu chuong (1-9).Moi nhap lai n: ");scanf("%d",&n);
	}		
    for(i=1;i<=9;i++)
    {	
        printf("%dx%d =%d\n",n,i,n*i);
	}	
}
