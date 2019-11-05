#include <bits/stdc++.h>
using namespace std;

int main()
{
	size_t temp;
	string str0,str1,str2,ans;
	bool flag1=false,flag2=false ;
	cin >> str0 >> str1 >> str2;
	if((temp=str0.find(str1))!=string::npos)
	{
		if((temp=str0.find(str2,temp+str1.length()))!=string::npos)
			flag1=true;
	}
	reverse(str0.begin(),str0.end());
	if((temp=str0.find(str1))!=string::npos)
	{
		if((temp=str0.find(str2,temp+str1.length()))!=string::npos)
			flag2=true;
	}
	if(flag1&&flag2)
		ans="both";
	else if(flag1)
		ans="forward";
	else if (flag2)
		ans="backward";
	else 
		ans="fantasy";
	cout << ans << endl;
	return 0;
}
