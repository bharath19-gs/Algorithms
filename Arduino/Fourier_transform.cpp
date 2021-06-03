#include<iostream>
#include<fstream>
#include<math.h>
#include<vector>
#include<string>

using namespace std;

//Fourier Series
float a0_integral(float );
float an_integral(int , float );
float bn_integral(int , float );

int main()
{
float T=(2*M_PI);
vector <float>frequency (11), amplitude (11), phase (11);
float an,bn;

ofstream fout;
fout.open("fourier_data.dat");
{
frequency[0]=0;
amplitude[0]=(1/T)*(a0_integral(T))-(a0_integral(0));
phase[0]=0.0;
an=amplitude[0];
bn=0.0;
}
fout<<"0"<<"	"<<an<<"	"<<bn<<"	"<<frequency[0]<<"	"<<amplitude[0]<<"	"<<phase[0]<<endl;
for(int i=1;i <= 10;i++)
{
frequency[i]=float(i)/T;
an=(2/T)*(an_integral(i,T)-an_integral(i,0));
bn=(2/T)*(bn_integral(i,T)-bn_integral(i,0)); 
amplitude[i]=sqrt(an*an+bn*bn); 
phase[i]=atan2(bn,an)*(M_PI/180);
fout<<i<<"	"<<an<<"	"<<bn<<"	"<<frequency[i]<<"	"<<amplitude[i]<<"	"<<phase[i]<<endl;
}
fout.close();
}

float a0_integral(float t)
{
	return (sin(3*t)/3 - cos(5*t)/5);
}
float an_integral( int n, float t)
{
	return 0.5*(cos((2*n-5)*t)/(2*n-5))-(cos((2*n+5)*t)/(2*n+5))+(sin((2*n-3)*t)/(2*n-3))+(sin((2*n+3)*t)/(2*n+3));
}
float bn_integral(int n, float t)
{
	return 0.5*(sin((2*n-5)*t)/(2*n-5))-(sin((2*n+5)*t)/(2*n+5))-(cos((2*n-3)*t)/(2*n-3))+(cos((2*n+3)*t)/(2*n+3));
}
