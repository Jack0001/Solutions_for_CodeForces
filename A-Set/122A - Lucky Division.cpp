#include <iostream>
using namespace std;

int main()
{
	int list[13]={4,7,47,74,44,77,444,447,474,477,777,747,774};
	int in,i;
	bool flag;
	cin>>in;
	for(i=0;i<13;i++)
	{
		if(in%list[i]==0)
		{
			flag=1;
			break;
		}
		else
			flag=0;
	}
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}