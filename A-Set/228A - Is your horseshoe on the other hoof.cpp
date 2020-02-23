#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,i;
	set<int> fig;
	for(i=0;i<4;i++)
	{
		cin >> a;
		fig.insert(a);
	}
	cout << 4-fig.size() << endl;
	return 0;
}
