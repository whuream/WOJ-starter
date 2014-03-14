#include<iostream>
#include<vector>

using namespace std;

int findx(int d[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(x==d[i]) return i;
	}
	return -1;
}

int main()
{
	int N,i,key;
	int d[100];
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>d[i];
	}
	cin>>key;
	cout<<findx(d,N,key)<<endl;
	return 0;
}