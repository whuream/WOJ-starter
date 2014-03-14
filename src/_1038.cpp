#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int num,j;
		cin>>num;
		vector<int>str;
		for(j=0;j<num;j++)
		{
			int tmp;
			cin>>tmp;
			str.push_back(tmp);
		}
		sort(str.begin(),str.end());
		for(j=0;j<num;j++)
			cout<<str[j]<<' ';
		cout<<endl;
	}
	return 0;
}