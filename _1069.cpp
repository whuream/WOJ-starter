#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int p;
	double a,b;
	while(cin>>p>>a>>b)
	{
		double zero=1;
		for(int i=0;i<p;i++) zero*=0.1;
		if(fabs(a-b)<zero) cout<<"0\n";
		else if(a>b) cout<<"1\n";
		else cout<<"-1\n";
	}
	return 0;
}