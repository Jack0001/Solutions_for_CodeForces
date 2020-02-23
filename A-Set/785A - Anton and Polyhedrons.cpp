#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,lineNum,ans=0;
	string pattern;
	cin >> lineNum;
	for(i=0;i<lineNum;i++)
	{
		cin >> pattern;
		if(pattern=="Tetrahedron")
			ans+=4;
		if(pattern=="Cube")
			ans+=6;
		if(pattern=="Octahedron")
			ans+=8;
		if(pattern=="Dodecahedron")
			ans+=12;
		if(pattern=="Icosahedron")
			ans+=20;
	}
	cout << ans << endl;
	return 0;
}
