#include <iostream>
using namespace std;
long long arr[10^64];
long long pos,max1,i,j;

int main()
{
	cin>>max1>>pos;
	for(i=1,j=0;i<=max1;i=i+2,j++)
	{
		arr[j]=i;
	}
	for(i=2;i<=max1;i=i+2,j++)
	{
		arr[j]=i;
	}
	cout<<arr[pos-1]<<endl;
	return 0;
}