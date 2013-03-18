#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	int N,M;
	while(cin>>N>>M)
	{
		int i,j;
		list<int> duilie;
		for(i=0;i<M;i++)
		{
			int a,b;
			cin>>a>>b;
			if((1==a)&&(duilie.size()<N))
			{
				duilie.push_back(b);
				;
			}
			if((2==a)&&(0==duilie.empty()))
			{
				duilie.pop_front();
			}
		}
		list<int>::iterator all;
		list<int>::iterator end=duilie.end();
		if(duilie.empty()) cout<<"NULL";
		else
		{
			for(all=duilie.begin();all!=end;all++)
			{
				cout<<*all<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}