#include<iostream>
using namespace std;
int Nhap_Mang(int A[],int &n)
{
	cout<<"Nhap so luong phan tu mang n= ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]=";
		cin>>A[i];
	}
}
void In_Mang(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<"\t";
}
int main()
{
	int A[10],n;
	Nhap_Mang(A,n);
	In_Mang(A,n);
}
