#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,counter=0;
	cin >> n;
	string a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i][1]==a[i+1][0])
		{
			counter++;
		}
	}
	cout << counter+1 << endl;
	return 0;
}
