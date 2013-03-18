#include<iostream>
#include<cmath>

using namespace std;

int time_elapse(int hour,int minute,int second)
{
	return hour*60*60+minute*60+second;
}

int main()
{
	int N,i;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int a,b,c,d,e,f;
		cin>>a;
		getchar();
		cin>>b;
		getchar();
		cin>>c;
		getchar();
		cin>>d;
		getchar();
		cin>>e;
		getchar();
		cin>>f;
		cout<<time_elapse(a,b,c)<<' '<<time_elapse(d,e,f)
			<<' '<<abs(time_elapse(a,b,c)-time_elapse(d,e,f))<<endl;
	}
	return 0;
}