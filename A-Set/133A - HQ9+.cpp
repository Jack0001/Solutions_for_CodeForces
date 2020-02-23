#include <bits/stdc++.h>
using namespace std;

int main()
{
	string cmd;
	int i;
	bool flag=false;
	cin >> cmd;
	for(i=0;i<cmd.length();i++)
	{
		if(cmd[i]=='H' || cmd[i]=='Q' || cmd[i]=='9')
		flag=true;
	}
	if(flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
