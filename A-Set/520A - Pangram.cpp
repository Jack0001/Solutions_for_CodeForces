#include <bits/stdc++.h>
using namespace std;
int t[10000];

int main()
{
    int l;
    string a;
    cin>>l>>a;
    for(int i=0;i<l;i++)
    {
        a[i]=tolower(a[i]);
        t[a[i]]=1;
    }
    for(int i='a';i<='z';i++)
    {
        if(t[i]!=1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
