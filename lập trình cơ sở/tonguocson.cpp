#include <stdio.h>
int main()
{
	int i,n,s=0,j=0;
		printf("Nhap vao n: ");scanf("%d",&n);
		printf("Cac uoc so la: ");
		for(i=1;i<=n;i++)
			if(n%i == 0)
                {
				    printf("%d, ",i);
				    s++;
				    j=j+i;

               	}
        printf("\ntong cua uoc so la %d",j);
}
