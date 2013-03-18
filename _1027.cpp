#include<iostream>

using namespace std;

int fibonacci(int n)
{
	if(0==n) return 1;
	else if(1==n) return 1;
	else return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int n;
		cin>>n;
		cout<<fibonacci(n)<<endl;
	}
	return 0;
}