#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int jie(int N)
{
	if(1==N) return 1;
	else return jie(N-1)*N;
}

int main()
{
	string line;
	int num;
	while(cin>>line>>num)
	{
		int line_len=line.length();
		int i;
		int count=line_len;
		sort(line.begin(),line.end());


		for(i=0;i<line_len-1;i++)
		{
			count--;
			int shang,jie_now=jie(count);

			shang=num/jie_now;

			cout<<line[shang];

			line.erase(shang,1);

			num%=jie_now;
		}
		cout<<line[0]<<endl;
	}
	return 0;
}