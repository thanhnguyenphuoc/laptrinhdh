#include<stdio.h>
void HV(int &a,int &b)
{
	int tam=a;a=b;b=tam;
}
int main()
{
	int a=2,b=3;
	HV(a,b);
	printf("ket qua HV o Main a= %d,b= %d",a,b);	
}
