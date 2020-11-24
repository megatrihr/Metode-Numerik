#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;


int main()
{
	ofstream myfile ("mega.csv");
	myfile.is_open();
	myfile<<"x,y\n";
	
	float x,y,h,f,f1,f2;
	int i;
	
	cout<<"\n ============================================================="<<endl;
	cout<<"\n            Komputasi Numerik Dengan Metode Euler"<<endl;
	cout<<"\n ============================================================="<<endl;
	cout<<"\n Masukkan Step Size :	";
	cin>>h;
	
	cout<<"\n Masukkan Angka 0 untuk Orde Pertama";
	cout<<"\n Masukkan Angka 2 untuk Orde Kedua";
	cout<<"\n Masukkan Angka 1 untuk Orde Ketiga";
	cout<<"\n\n Pilih Orde :	";
	cin>>i;
	
	y=1;

	for (x=0;x<=4;x+=h)
	{
		f=-2*pow(x,3)+12*pow(x,2)-20*x+8.5;
		f1=-6*pow(x,2)+24*x-20;
		f2=-12*x+24;
		
		if(i<=0){
				y=y+f*h;
			}
		if(i>=2){
				y=y+f*h+(f1*pow(h,2))/2;
			}
		if(i%2!=0){
				y=y+f*h+(f1*pow(h,2))/2+(f2*pow(h,3))/6;	
		}

		myfile<<x;
		myfile<<",";
		myfile<<y;
		myfile<<"\n";
	}
	myfile.close();
	
	return 0;
}
