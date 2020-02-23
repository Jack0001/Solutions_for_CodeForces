#include <iostream>
using namespace std;

int main()
{
	string in;
	int i,len;
	bool needchange=true;
	cin>>in;
	len=in.length();
	for(i=1;i<len;i++)
	{
		if(in[i]>='a')
		{
			needchange=false;
			break;
		}
	}
	if(needchange==true)
	{
		for(i=0;i<len;i++)
		{
			if(in[i]>='a')
			{
				in[i]-=32;
			}
			else
			{
				in[i]+=32;
			}
		}
	}
	cout<<in<<endl;
	return 0;
}