#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		cout<<a+b+c<<' ';
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<(a+b+c)/3.0<<' ';
		cout<<a*b*c<<' '<<(a<b?(a<c?a:c):(b<c?b:c))<<' '
			<<(a>b?(a>c?a:c):(b>c?b:c))<<endl;
	}
}