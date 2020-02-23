#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<char> ans;
	char n;
	while(cin >> n)
	{
		if(n>='a' && n<='z')
		ans.insert(n);
	}
	cout << ans.size() << endl;
	return 0;
}
