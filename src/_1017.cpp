#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
	double n;
	cin>>n;
	double a=0;
	int pre=1;
	for(int i=1;i<=n;i++)
	{
		pre*=i*2*(i*2-1);
		a+=1.0/pre;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<a;
	//system("pause");
	return 0;
}