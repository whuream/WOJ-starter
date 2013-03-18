#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>

using namespace std;

double f(int x){return sqrt(6.0*x+2);}

int main()
{
	double all=0;
	for(int i=0;i<21;i++)
	{
		double c=f(i*50);
		all+=c;
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<c<<' '
			<<all<<endl;
	}
	//system("pause");
	return 0;
}