#include <iostream>
#include <set>
using namespace std;

int main()
{
	int level,a,b,i,temp;
	set<int> AllLevels;
	cin>>level;
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>temp;
		AllLevels.insert(temp);
	}
	cin>>b;
	for(i=0;i<b;i++)
	{
		cin>>temp;
		AllLevels.insert(temp);
	}
	
	if(AllLevels.size()==level)
		cout<<"I become the guy."<<endl;
	else
		cout<<"Oh, my keyboard!"<<endl;
	return 0;
}