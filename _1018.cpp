#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
	double price[6]={0,2.98,4.50,9.98,4.49,6.87};
	int N,i;
	double all=0;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int a,b;
		cin>>a>>b;
		all+=price[a]*b;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<all<<endl;
	//system("pause");
	return 0;
}