#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	cout<<"number\tsquare\tcube"<<endl;
	for(int i=0;i<=10;i++)
	{
		cout<<i<<'\t'<<i*i<<'\t'<<i*i*i<<endl;
	}
	//system("pause");
	return 0;
}