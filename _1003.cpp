#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double a;
	cin>>a;
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<a*0.393700787<<' '<<a*0.032808399<<endl;
	//cin>>a;
	return 0;
}