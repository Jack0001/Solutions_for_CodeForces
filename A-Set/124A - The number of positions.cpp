#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,a,b,ans=0;
	cin >> n >> a >> b;
	for(i=1;i<=n;i++)
	{
		if(i-1>=a && n-i<=b)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
