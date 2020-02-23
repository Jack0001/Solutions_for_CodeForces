#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	bool colored=false;
	char color;
	cin >> n >> m;
	for(int j=1;j<=n;j++)
	{
		for(int i=1;i<=m;i++)
		{
			cin >> color;
			if(color=='C' || color=='M' || color=='Y')
				colored=true;
		}
		
	}
	if(colored==true)
		cout << "#Color" << endl;
	else
		cout << "#Black&White" << endl;
	return 0;
}
