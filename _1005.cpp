#include<iostream>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int a,b;
		cin>>a>>b;
		if(0==b) cout<<"UNKNOWN"<<endl;
		else if(0==a%b) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}