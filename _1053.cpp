#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int N;
	while(cin>>N)
	{
		int i,j;
		for(i=1;i<=N;i++)
		{
			int space=abs(4*N+1-(4*i-3))/2;
			for(j=0;j<space;j++) cout<<' ';
			for(j=0;j<4*i-3;j++) cout<<'*';
			cout<<endl;
		}
		
		for(i=0;i<4*N+1;i++) cout<<'*';
		cout<<endl;

		for(i=N;i>=1;i--)
		{
			int space=abs(4*N+1-(4*i-3))/2;
			for(j=0;j<space;j++) cout<<' ';
			for(j=0;j<4*i-3;j++) cout<<'*';
			cout<<endl;
		}
	}
	return 0;
}