#include <bits/stdc++.h>
using namespace std;

int main()
{
	string::size_type temp;
	string a,b,c,ans;
	cin >> a >> b >> c;
	if(temp=a.find(b)!=string::npos)
	{
		if(temp<a.find(c))
		{
			ans="forward";
		}
	}
	if(temp=a.rfind(b)!=string::npos)
	{
		if(temp<a.rfind(c))
		{
			if(ans=="forward")
				ans=="both";
			else
				ans="backward";
		}
	}
	
	if(a.find(b)==string::npos && a.find(c)==string::npos && a.rfind(b)==string::npos && a.rfind(c)==string::npos)
		ans="fantasy";	
	if(temp=a.find(b)!=string::npos)
	{
		if(temp<a.find(c))
		{
			ans="fantasy";
		}
	}
		if(temp=a.rfind(b)!=string::npos)
	{
		if(temp<a.rfind(c))
		{
			ans="fantasy";
		}
	}
	cout << ans << endl;
	return 0;
}

