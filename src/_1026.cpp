#include<iostream>

using namespace std;

int k[100];

int fibonacci(int n)
{
	return k[n];
}

int main()
{
	k[0]=1;
	k[1]=1;
	for(int i=2;i<100;i++) k[i]=k[i-1]+k[i-2];
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		int n;
		cin>>n;
		cout<<fibonacci(n)<<endl;
	}
	return 0;
}