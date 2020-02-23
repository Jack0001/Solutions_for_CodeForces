#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,len;
	string str;
	cin >> len >> str;
	if(str[0]=='S' && str[len-1]=='F')
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
