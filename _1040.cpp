#include<iostream>

#define IMAX 0x7FFFFFFF

using namespace std;

int main()
{
	int N,i,min=IMAX;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int tmp;
		cin>>tmp;
		tmp<min?min=tmp:1;
	}
	cout<<min<<endl;
	return 0;
}