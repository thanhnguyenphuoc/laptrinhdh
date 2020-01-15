#include<iostream>
using namespace std;
int main()
{
	FILE *fptr;
	fptr=fopen("D:\\tam.dat","w");//tao file moi tam.dat ghi du lieu,gan con tro fptr vao file tam.dat
	if(fptr==NULL)
		cout<<"khong mo duoc file ";
	else
	{
		cout<<"mo file thanh cong";
		//xu ly ghi hoac doc du lieu 
		fclose(fptr);//dong file
	}
}
