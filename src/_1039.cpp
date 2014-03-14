#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int N,i,j,k;
	cin>>N;
	vector<string>key(N);
	vector<int>count(N,0);
	string str;
	for(i=0;i<N;i++)
	{
		string tmp;
		cin>>tmp;
		key[i]=tmp;
	}
	cin>>str;
	for(int p_key=0;p_key<N;p_key++)
	{
		int begin=0;
		while(begin+key[p_key].length()<=str.length())
		{
			string sub=str.substr(begin,key[p_key].length());
			if(sub==key[p_key])
			{
				count[p_key]++;
				begin+=key[p_key].length();
			}
			else begin+=1;
		}
	}
	for(i=0;i<N;i++)
	{
		cout<<count[i]<<endl;
	}
	return 0;
}