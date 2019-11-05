#include <bits/stdc++.h>
using namespace std;

int main()
{
	string layout="qwertyuiopasdfghjkl;zxcvbnm,./",input,output;
	char LR;
	int i,pos;
	cin >> LR >> input;
	if(LR=='L')
	{
		for(i=0;i<input.length();i++)
		{
			pos=layout.find(input[i]);
			output+=layout[pos+1];
		}
	}
	if(LR=='R')
	{
		for(i=0;i<input.length();i++)
		{
			pos=layout.find(input[i]);
			output+=layout[pos-1];
		}
	}
	cout << output << endl;
	return 0;
}
