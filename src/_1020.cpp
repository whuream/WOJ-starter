#include<iostream>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int y,flag=0;
		cin>>y;
		for(int j=-9;j<10;j++)
		{
			if(2*j*j*j-4*j*j+3*j-6==y)
			{
				cout<<j;
				flag=1;
			}
		}
		if(0==flag) cout<<"NULL";
		cout<<endl;
	}
	return 0;
}