#include<iostream>
#include<string>

using namespace std;

int main()
{
	string line;
	while(1)
	{
		cin>>line;
		if("E"==line) break;
		int cz=0,co=0,cj=0;
		int line_len=line.length();
		int line_pointer=0;
		for(;line_pointer<line_len;line_pointer++)
		{
			if('Z'==line[line_pointer]) cz++;
			else if('O'==line[line_pointer]) co++;
			else cj++;
		}
		while((cz>0)||(co>0)||(cj>0))
		{
			if(cz>0) cout<<'Z';
			if(co>0) cout<<'O';
			if(cj>0) cout<<'J';
			cz--;
			co--;
			cj--;
		}
		cout<<endl;
	}
	return 0;
}