#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		double a;
		cin>>a;
		cout<<setiosflags(ios::fixed)<<setprecision(2)<<(a-32)*5/9<<endl;
	}
}