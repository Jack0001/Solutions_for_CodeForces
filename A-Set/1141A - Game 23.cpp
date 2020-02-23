#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,move=0;
	cin >> n >> m;
	if(m%n!=0)
	{
		cout << "-1" << endl;
	}
	else
	{
		m=m/n;
		while(m%3==0)
		{
			move++;
			m=m/3;
		}
		while(m%2==0)
		{
			move++;
			m=m/2;
		}
		if(m>1)
		{
			cout << "-1" << endl;
		}
		else
		{
			cout << move << endl;
		}
	}
	return 0;
}
