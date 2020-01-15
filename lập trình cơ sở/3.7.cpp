#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,dau=1;
	float t=1,kq=0;
	while(fabs(t)>0.000001)
	{
		t=(float) 1/(2*i+1)*dau;
		kq=kq+t;
		i=i+1;
		dau=dau*(-1);
	}
	printf("PI=%f",4*kq);
}
