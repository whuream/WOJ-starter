#include<iostream>

using namespace std;

int main()
{
	int s;
	while(1)
	{
		cin>>s;
		if(-1==s) break;
		cout<<int(200+s*0.09+0.5)<<endl;
	}
	return 0;
}