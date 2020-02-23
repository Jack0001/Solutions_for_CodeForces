#include <bits/stdc++.h>
using namespace std;
int main()
{
	int money,ans=0;
	cin >> money;
	ans += money/100;
	money %= 100;
	ans += money/20;
	money %= 20;
	ans += money/10;
	money %= 10;
	ans += money/5;
	money %= 5;
	ans += money;
	cout << ans << endl;
	return 0;
}
