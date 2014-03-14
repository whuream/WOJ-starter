#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N;
	while(1)
	{
		cin>>N;
		vector<int> socer(N);
		int i;
		if(0==N) break;
		for(i=0;i<N;i++) cin>>socer[i];
		int key,count=0;
		cin>>key;
		vector<int>::iterator iter=socer.begin();
		vector<int>::iterator iter_end=socer.end();
		for(;iter!=iter_end;iter++)
			if(key==*iter) count++;
		cout<<count<<endl;
	}
	return 0;
}