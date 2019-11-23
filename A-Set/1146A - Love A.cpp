#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int i,count=0;
	double len;
	cin>>s;
	len=s.size();
	for(i=0;i<len;i++)
	{
		if(s[i]=='a')
		    count++;
	}
	if(count>len/2)
	{
		cout << (int)len << endl;
	}
	else
	{
		while(len/2>=count)
		    len--;
		cout << len << endl;
	}
	return 0;
}
