#include<iostream>
#include<string>

using namespace std;

//���Ⱑ���⣡��������
int main()
{
	string line;
	int key;
	while(cin>>line>>key)
	{
		int i;
		int line_len=line.length();
		for(i=0;i<line_len;i++)
		{
			line[i]=(line[i]-i-1-key+26*26*26*26-'A')%26+'A';
		}
		cout<<line<<endl;
	}
	return 0;
}