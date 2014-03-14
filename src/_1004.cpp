#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int a,b;
		cin>>a>>b;
		if(b!=0)
		cout<<a+b<<' '<<a*b<<' '<<a-b<<' '<<a/b<<' '<<a%b<<endl;
		else
			cout<<a+b<<' '<<a*b<<' '<<a-b<<" -1 -1"<<endl;
	}
	//system("pause");
	return 0;
}