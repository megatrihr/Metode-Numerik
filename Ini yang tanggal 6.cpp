//exercise 1

#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

#define PI 3.14

int main()
{
	ofstream myfile ("test.csv");
	myfile.is_open();
	myfile<<"t, f1, f2\n";
	
	float t, f1, f2;
	for (t=0;t<=1;t+=0.01)
	{
		//y=sin(2PI ft);
		f1=sin(2*PI*1*t);
		f2=sin(2*PI*4*t);
		myfile<<t;
		myfile<<",";
		myfile<<f1;
		myfile<<",";
		myfile<<f2;
		myfile<<"\n";
	}
	myfile.close();
	
	return 0;
}

