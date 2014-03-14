#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		string::size_type pos=0;
		while((pos=a.find_first_of(',',pos))!=string::npos)
		{
			a.erase(pos,1);
		}
		pos=0;
		while((pos=b.find_first_of(',',pos))!=string::npos)
		{
			b.erase(pos,1);
		}
		//cout<<a<<' '<<b<<endl;
		stringstream str(a);
		stringstream str2(b);
		int n1,n2;
		str>>n1;
		str2>>n2;
		cout<<n1+n2<<endl;
	}
	return 0;
}