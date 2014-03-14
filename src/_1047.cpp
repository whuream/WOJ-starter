#include<iostream>

using namespace std;

int main()
{
	int N;
	while(1)
	{
		int count=0;
		cin>>N;
		if(0==N) break;
		while(N!=1)
		{
			if(N%2==0) N/=2;
			else N=(3*N+1)/2;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}