#include<iostream>
#include<math.h>
using namespace std;
struct DIEM
{
	int x;
	int y;
}D[10],D1;
void Nhap_Diem(DIEM D[],int &n)
{
	cout<<"nhap so luong diem n= ";cin>>n;
	for(int i=0; i<n;i++)
	{
		cout<<"\nnhap vao diem thu: "<<i+1;
		cout<<"\nnhap vao toa do x: ";
		cin>>D[i].x;
		cout<<"Nhap vao toa do y: ";
		cin>>D[i].y;
	}
}
float DoDai(int x, int y)
{
	return sqrt(x*x+y*y);
}
void In_Diem(DIEM D[],int n)
{
	cout<<"STT\tX\tY\tDo lon\n";
	for(int i=0;i<n;i++)
	{
		cout<<i+1<<"\t"<<D[i].x<<"\t"<<D[i].y<<"\t"<<DoDai(D[i].x,D[i].y)<<"\n";
	}
}
void sapxep(DIEM D[],int n)
{
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
		if(D[i].x>D[j].x)
		{
			D1=D[i];
			D[i]=D[j];
			D[j]=D1;
		}
}
int main()
{
	int n;
	Nhap_Diem(D,n);
	In_Diem(D,n);
	sapxep(D,n);
	cout<<"Ket qua sau khi sap xep la\n";
	In_Diem(D,n);
}
