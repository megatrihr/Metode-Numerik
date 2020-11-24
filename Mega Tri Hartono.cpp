#include<iostream>
#include<fstream>
#include<math.h>

#define Io 1.64053

using namespace std;

float f(float x)
{
	return(0.2+25*x-200*pow(x,2)+675*pow(x,3)-900*pow(x,4)+400*pow(x,5));
}
float a,b,n,h,I,temp,i,jarak,error;
int main()
{
	ofstream myfile ("Homework1.csv");
	myfile.is_open();
	myfile<<"n, I, error\n";

for(n=2;n<=32;n*=2)
{
	a=0;
	b=0.8;
	h=(b-a)/n;
	temp=f(a)+f(b);
	
	jarak=a;
	for(i=1;i<=n;i++)
	{
		jarak=jarak+h;
		if(fmod(i,2)!=0)
		{
			temp=temp+4*f(jarak);
  		}
		else
		{
			temp=temp+2*f(jarak);
		}
	}

	I=(temp*h)/3;
	
	error=(I-Io)*100/Io;
	if(error<0)
		{
			error=(-1)*error;
		}
	else 
		{
			error=error;
		}	
	
	myfile<<n;
	myfile<<",";
	myfile<<I;
	myfile<<",";
	myfile<<error<<"%";
	myfile<<"\n";
}
	myfile.close();
	
	return 0;
}
