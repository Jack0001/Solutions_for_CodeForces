#include<bits/stdc++.h>
using namespace std;
int n,i;

int main(){
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			cout<<"I hate ";
			if(i!=n)
				cout<<"that ";
		}
		if(i%2==0)
		{
			cout<<"I love ";
			if(i!=n)
				cout<<"that ";
		}
	}
	cout<<"it";
	return 0;
}
