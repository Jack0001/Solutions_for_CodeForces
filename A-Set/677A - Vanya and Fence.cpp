#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,a,i,ans=0;
	cin >> n >> k;
	for(i=0;i<n;i++)
	{
		cin >> a;
		if(a>k)
			ans+=2;
		else
			ans++;
	}
	cout << ans << endl;
	return 0;
}
