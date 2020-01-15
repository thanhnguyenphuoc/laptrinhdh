#include<stdio.h>
#define MAX 10
int main ()
{
	int A[MAX],n,i,max,vt=0;
	printf("nhap vao so luong phan tu:");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]=",i);scanf("%d",&A[i]);
	}
	//in ra cac phan tu trong mang ra man hinh 
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	//tim max 
		max=A[0];
		for(i=0;i<n;i++)
		{
			if(max<A[i]){
			
			max=A[i];
			vt=i;
			}
		}
		printf("vi tri cua phan pt lon nhat la %d",vt+1);
}
