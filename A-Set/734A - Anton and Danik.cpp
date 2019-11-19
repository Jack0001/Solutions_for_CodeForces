#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num,i,A_count=0,D_count=0;
	cin >> num;
	string str;
	cin >> str;
	for(i=0;i<num;i++)
	{
		if(str[i]=='A')
		    A_count++;
		if(str[i]=='D')
		    D_count++;
	}
	if(A_count<D_count)
	    cout << "Danik" << endl;
	else if(A_count>D_count)
	    cout << "Anton" << endl;
	else if(A_count==D_count)
	    cout << "Friendship" << endl;
    return 0;
}
