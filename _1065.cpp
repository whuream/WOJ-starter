#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N,M;
	while(cin>>N>>M)
	{
		vector<int> zhan;
		int i;
		for(i=0;i<M;i++)
		{
			int a,b;
			cin>>a>>b;
			if((1==a)&&(zhan.size()<N)) zhan.push_back(b);
			if((2==a)&&(0==zhan.empty())) zhan.pop_back();
		}
		if(zhan.empty()) cout<<"NULL";
		else
		{
			vector<int>::iterator all;
			vector<int>::iterator begin=zhan.begin();
			for(all=zhan.end()-1;all!=begin;all--)
			{
				cout<<*all<<' ';
			}
			cout<<*all<<' ';
		}
		cout<<endl;
	}
	return 0;
}