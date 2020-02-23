#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	string a,b,ans;
	cin >> a >> b;
	for(i=0;i<a.length();i++)
	{
		if(a[i]==b[i])
			ans+='0';
		else
			ans+='1';
	}
	cout << ans << endl;
	return 0;
}
