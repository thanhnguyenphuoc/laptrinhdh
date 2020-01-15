#include<stdio.h>
int main()
{
    int i,n;
    for(n=2;n<=10;n++)
    {
    	printf("BANG CUU CHUONG %d\n",n);
    	for(i=1;i<=10;i++)
       		printf("%d x %d =%d\n",n,i,n*i);
       		printf("\n");
	}	
}
