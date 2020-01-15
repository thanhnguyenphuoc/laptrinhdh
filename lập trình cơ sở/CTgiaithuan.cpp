#include<stdio.h>  
int main()
{  
  float i,s=1,n;  
  printf("Nhap n: ");  scanf("%f",&n);  
  for(i=1;i<=n;i++)
	{  
      s=s*i;  
	}  
	printf("Giai thua cua %0.1f la: %0.2f",n,s);     
}   
