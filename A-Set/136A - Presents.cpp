#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool play=false;
	int i;
	string a,b;
	cin >> a;
	for(i=0;i<5;i++)
	{
		cin >> b;
		if(a[0]==b[0] || a[1]==b[1])
			play=true;
	}
	if(play)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
