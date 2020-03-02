#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,n[1000],M=0,i;
	cin >> N;
	for(i=0;i<N;i++)
	{
		cin >> n[i];
		if(n[i]==1)
		{
			M++;
		}
	}
	cout << M << endl;
	for(i=0;i<N;i++)
	{
	
		if(n[i+1]!=n[i]+1)
		{
			cout << n[i] << " ";
		}
	}
    return 0;
}
