#include<iostream>
using namespace std;
struct Phanso{
	int tuso;
	int mauso;
};
int nhapps(Phanso &p)
{
	cout<<"nhap  vao tu so la ";
	cin>>p.tuso;
	do{
	cout<<"nhap vao mau so la ";
	cin>>p.mauso;
	}while(p.mauso==0);
}
int xuatps(Phanso p)
{
	cout<<"phan so la "<<p.tuso<<"/"<<p.mauso<<endl;
}
int USCLN(int m, int n)
{
	if(m==n)
	return m;
	else if(m>n) return(m-n,n);
	else return(n-m,m);
}
int rutgon(Phanso p)
{
	int n=USCLN(p.tuso,p.mauso);
	p.tuso=p.tuso/n;
	p.mauso=p.mauso/n;
	cout<<"Rut gon  phan so la "<<p.tuso<<"/"<<p.mauso<<endl;
}
int main()
{
	Phanso p;
	nhapps(p);
	xuatps(p);
	rutgon(p);
}
