#include<iostream>
#include<iomanip>
#define PI 3.1415926

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		double a;
		cin>>a;
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<a*2<<' '<<2*PI*a<<' '<<PI*a*a<<endl;
	}
}