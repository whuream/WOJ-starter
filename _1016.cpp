#include<iostream>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int a;
		cin>>a;
		if(a<0) cout<<"X"<<endl;
		else if(a<60) cout<<"E\n";
		else if(a<70) cout<<"D\n";
		else if(a<80) cout<<"C\n";
		else if(a<90) cout<<"B\n";
		else if(a<=100) cout<<"A\n";
		else cout<<"X\n";
	}
	return 0;
}