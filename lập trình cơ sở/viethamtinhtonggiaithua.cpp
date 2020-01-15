#include<stdio.h>
int giaithua(int n)
{
  int i,gt=1;
  if(n==0) return 1;
  for(i=1;i<=2*n;i++)
    {
      gt=gt*i;
    }
  return gt;
}
int tong(int n)
{
  int i,tong=0;
  for(i=0;i<=n;i++)
    {
      tong=tong+giaithua(i);
    }
  return tong;
}
int main()
{
  int n;
  printf("nhap n:");
  scanf("%d",&n);
  printf("tong la:%d\n",tong(n));
}
