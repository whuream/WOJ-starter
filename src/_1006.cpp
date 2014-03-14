#include<iostream>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int a;
		cin>>a;
		if(1==a%2) cout<<"odd"<<endl;
		else cout<<"even"<<endl;
	}
}