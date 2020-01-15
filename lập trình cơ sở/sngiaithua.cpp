#include <stdio.h>
int main()
{
      int n, gt=1,i=1,j=1;
      float s=0;
      printf("Nhap n: ");scanf("%d", &n);
      for(i=1; i<=n; i++)
	  {
            gt=gt*i;
            s=s+1.0/gt;
      }
      printf("S = %0.2f", s);
}
