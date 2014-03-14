#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N;
	while(1)
	{
		cin>>N;
		if(0==N) break;

		vector<int> line(N);

		int i,j,count=0;
		for(i=0;i<N;i++) cin>>line[i];
		for(i=0;i<N-1;i++)
			for(j=i+1;j<N;j++)
			{
				if(line[i]>line[j])
				{
					int tmp=line[i];
					line[i]=line[j];
					line[j]=tmp;
					count++;
				}
			}
			cout<<count<<endl;
	}
	return 0;
}