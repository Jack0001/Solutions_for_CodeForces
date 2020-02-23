#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool isHard=false;
	int i,num,a;
	cin >> num;
	for(i=0;i<num;i++)
	{
		cin >> a;
		if(a==1)
		{
			isHard=true;
		}	
	}
	if(isHard)
		cout << "HARD" << endl;
	else
		cout << "EASY" << endl;
	return 0;
}
