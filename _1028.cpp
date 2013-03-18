#include<iostream>

using namespace std;

int main()
{
	int len=0;
	int a[100];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		len=0;
		int num;
		cin>>num;
		for(int j=0;j<100;j++)
		{
			if(0==num/7)
			{
				a[len]=num%7;
				break;
			}
			else
			{
				a[len]=num%7;
				num/=7;
			}
			len++;
		}
		for(int i=len;i>=0;i--)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
}