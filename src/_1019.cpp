#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int N,i;
	cin>>N;
	int today=1;
	for(i=0;i<N-1;i++)
	{
		today=(today+1)*2;
	}
	cout<<today<<endl;
	//system("pause");
	return 0;
}