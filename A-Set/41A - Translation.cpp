#include<bits/stdc++.h>
using namespace std;
string a,b,c;

int main()
{
    cin>>a>>b;
    c=b;
    reverse(c.begin(),c.end());
    if(a==c)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    return 0;
}
