#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c,i,ans=0;
	cin >> a;
	for(i=0;i<a;i++)
	{
		cin >> b >> c;
		if(c-b>=2)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
