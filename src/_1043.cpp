#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int M,N,i,j;
	while(1)
	{
		int count=0;
		cin>>M;
		if(0==M) break;
		cin>>N;
		vector< vector<int> > a(M);
		vector< vector<int> > b(M);
		for(i=0;i<M;i++)
		{
			a[i].resize(N);
			b[i].resize(N);
		}
		a[0][0]=0;
		for(i=0;i<M;i++)
			for(j=0;j<N;j++)
				cin>>a[i][j];
		for(i=0;i<M;i++)
			for(j=0;j<N;j++)
				cin>>b[i][j];
		for(i=0;i<M;i++)
			for(j=0;j<N;j++)
				a[i][j]+=b[i][j];
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				if(0!=a[i][j]) break;
			}
			if(N==j) count++;
		}
		for(i=0;i<N;i++)
		{
			for(j=0;j<M;j++)
			{
				if(0!=a[j][i]) break;
			}
			if(M==j) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}