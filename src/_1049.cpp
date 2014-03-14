#include<iostream>
#include<vector>

using namespace std;


void f(int N)
{
	if(0==N) return;
	int i;
	cin>>i;
	f(N-1);
	cout<<i<<' ';
}

int main()
{
	int N,i;
	cin>>N;
	f(N);
	return 0;
}