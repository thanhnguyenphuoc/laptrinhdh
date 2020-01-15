#include<stdio.h>
int main()
{
	int n,dem=0;
	do{
		printf("nhap so nguyen n:");scanf("%d",&n);
		if(n!=0)
		 if(n%2==0)
		 	dem++;
	}while(n!=0);
	printf("so luong so chan la %d",dem); 
}
