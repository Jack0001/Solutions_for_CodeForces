#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int i,uppercaseC=0,lowercaseC=0;
	cin >> s;
	for(i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
			uppercaseC++;
		if(islower(s[i]))
			lowercaseC++;
	}
	if(uppercaseC>lowercaseC)
		transform(s.begin(),s.end(),s.begin(),::toupper);
	if(uppercaseC<=lowercaseC)
		transform(s.begin(),s.end(),s.begin(),::tolower);
	cout << s << endl;
    return 0;
}
