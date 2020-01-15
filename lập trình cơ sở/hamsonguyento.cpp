#include<stdio.h>
#include<math.h>
int KTNT(int n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n);i++)
		if(n%i==0) return 0;
		return 1;
}
void Tach_SNT(int n)
{
	int tam,s,A[10],i=0;
	while(n!=0)
	{
		tam=n%10;s=0;
		if(KTNT(tam)==1)
		{
			A[i]=tam;
			i++;
		}
		n=n/10;
	}
	for(int j=i-1;j>=0;j++)
		printf("%d\t",A[i]);
}
int main()
{
	int n;
	printf("nhap n: ");scanf("%d",&n);
	Tach_SNT(n);
}
