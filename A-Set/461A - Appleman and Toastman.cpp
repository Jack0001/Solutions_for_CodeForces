#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> group;
	long long i,num,temp,sum=0,ans=0;
	cin>>num;	
	for(i=0;i<num;i++)
	{
		cin>>temp;
		group.push_back(temp);
		sum+=temp;
	}
	sort(group.begin(),group.end());
	ans=sum;
	for(i=0;i<num-1;i++)
	{
		ans+=sum;
		sum-=group[i];
	}
	cout<<ans<<endl;
	return 0;
}
