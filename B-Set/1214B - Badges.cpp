#include <bits/stdc++.h>
using namespace std;

int main()
{
	int b,g,n,i,j,ans=0;
	cin >> b >> g >> n;
	for (i = 0; i <= b; i++) 
	{
		for (j = 0; j <= g; j++) 
		{
			if (i + j == n) 
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
