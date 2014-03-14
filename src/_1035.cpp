#include<iostream>

using namespace std;

int main()
{
	char str[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int len=0;
	int a[100];
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		len=0;
		int num,di;
		cin>>num>>di;
		for(int j=0;j<100;j++)
		{
			if(0==num/di)
			{
				a[len]=num%di;
				break;
			}
			else
			{
				a[len]=num%di;
				num/=di;
			}
			len++;
		}
		for(int i=len;i>=0;i--)
			cout<<str[a[i]];
		cout<<endl;
	}
	return 0;
}