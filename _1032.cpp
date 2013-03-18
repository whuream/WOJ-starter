#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a,b,c;
	while(1)
	{
		cin>>a;
		if(-1==a) break;
		cin>>b;
		getchar();
		cin>>c;
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<a*b*c/36500.0
			<<endl;
	}
	return 0;
}