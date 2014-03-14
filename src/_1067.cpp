#include<iostream>
#include<iomanip>
#include<strstream>

using namespace std;

int main()
{
	int a;
	while(cin>>a)
	{
		char *p;
		int *_a=&a;
		p=(char *)(_a);

		int end;
		if(sizeof(int)==16) end=2;
		else end=4;
		for(int i=0;i<end;i++)
		{
			int tmp=int(*(p+i));
			if(tmp==0) cout<<"00";
			if(tmp>0)
			{
				if(tmp<10) cout<<"0";
				cout<<setiosflags(ios::uppercase)<<hex<<tmp;
			}
			if(tmp<0)
			{
				char buf[10];
				strstream a(buf,10);
				a<<setiosflags(ios::uppercase)<<hex<<tmp;
				cout<<buf[6]<<buf[7];
			}
			//cout<<hex<<setw(2)<<int(*(p+i));
		}
		cout<<endl;
	}
	return 0;
}