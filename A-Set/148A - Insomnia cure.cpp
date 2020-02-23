#include <bits/stdc++.h>
using namespace std;
bool beat[100000];

int main()
{
	int k,l,m,n,d,i,ans=0;
	cin >> k >> l >> m >> n >> d;
	for(i=k;i<=d;i+=k)
		beat[i]=true;
	for(i=l;i<=d;i+=l)
		beat[i]=true;
	for(i=m;i<=d;i+=m)
		beat[i]=true;
	for(i=n;i<=d;i+=n)
		beat[i]=true;
	for(i=1;i<=d;i++)
		if(beat[i])
			ans++;
	cout << ans << endl;
	return 0;
}
