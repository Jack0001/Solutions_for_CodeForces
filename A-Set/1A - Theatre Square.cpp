#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	long long n,m,a,out;
	cin>>n>>m>>a;
	out=ceil(n/(double)a)*ceil(m/(double)a);
	cout<<out<<endl;
	return 0;
}
