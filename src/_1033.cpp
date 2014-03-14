#include<iostream>

using namespace std;

int main()
{
	int a,max=-32768,min=32767,c=0;
	while(1)
	{
		cin>>a;
		if(-1==a)
		{
			cout<<c<<' '<<max<<' '<<min<<endl;
			break;
		}
		c++;
		max=a>max?a:max;
		min=a<min?a:min;
	}
		return 0;
}