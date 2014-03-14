#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=1;i<=N;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		cout<<"Case "<<i<<": ";

		long long int z=b*b-4*a*c;

		if(0==a)
		{
			if(0==b) cout<<"NULL\n";
			else if((double(c)/(-b)>-0.01)&&(double(c)/(-b)<0.01)) cout<<setiosflags(ios::fixed)
			<<setprecision(2)<<double(c)/(b)<<endl;
			else cout<<setiosflags(ios::fixed)
			<<setprecision(2)<<double(c)/(b)<<endl;
		}
		else 
		{
			if(z<0) cout<<"NULL\n";
			else if(0==z) cout<<setiosflags(ios::fixed)
									<<setprecision(2)<<(-b)/(2.0*a)<<endl;
			else cout<<setiosflags(ios::fixed)
					<<setprecision(2)<<(-b-sqrt((double)z))/(2*a)<<' '
					<<(-b+sqrt((double)z))/(2*a)<<endl;
		}
	}
	return 0;
}