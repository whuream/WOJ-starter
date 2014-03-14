#include<iostream>
#include<string>

using namespace std;

int main()
{
	string line,key;
	while(1)
	{
		int i;
		getline(cin,key);
		if(key=="#") break;
		getline(cin,line);
		//cout<<key<<' '<<line;

		int key_len=key.length(),line_len=line.length(),key_pointer;
		for(key_pointer=0;key_pointer<key_len;key_pointer++)
		{
			int count=0;
			int line_pointer=0;
			while((line_pointer=line.find_first_of(key[key_pointer],line_pointer))
				!=string::npos)
			{
				count++;
				line_pointer++;
			}
			cout<<key[key_pointer]<<' '<<count<<endl;
		}
	}

	return 0;
}