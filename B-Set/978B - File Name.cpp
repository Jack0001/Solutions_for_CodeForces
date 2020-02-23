#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	long long ans=0,num;
	cin>>num>>str;
	while(str.find("xxx")!=-1)
	{
		str.erase(str.find("xxx"),1);
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
