#include<iostream>

using namespace std;

int main()
{
	int N;
	while(cin>>N)
	{
		for(int i=0;i<=100;i++)
		{
			if(i*5>N) break;
			for(int j=0;j<=100-i;j++)
			{
				if(i*5+j*3>N) break;
				if(i*5+j*3+(100-i-j)*0.33333<=N)
					cout<<"x="<<i<<",y="<<j<<",z="<<100-i-j<<endl;
			}
		}
	}
	return 0;
}