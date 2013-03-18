#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	long long int tmp=1;
	double e=1;
	for(int i=1;;i++)
	{
		tmp*=i;
		double 	now=1.0/tmp;
		if(now<0.000000000000001)
		{
			cout<<setiosflags(ios::fixed)<<
				setprecision(14)<<e+now<<endl;
			break;
		}
		else e+=now;
	}
	return 0;
}