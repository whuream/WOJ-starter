#include<iostream>

using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		if(0==i%2) cout<<' ';
		for(j=0;j<8;j++) cout<<'*';
		cout<<endl;
	}
}