#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int f1=a+b+c;
	int f2=a*b*c;
	int f3=a+b*c;
	int f4=a*b+c;
	int f5=a*(b+c);
	int f6=(a+b)*c;
	cout<<max(f1,max(f2,max(f3,max(f4,max(f5,f6)))))<<endl;
	return 0;
}