#include <iostream>
#include <string>
using namespace std;

int main()
{
	int length,i,counter0=0,counter1=0;
	string str;
	cin >> length >> str;
	for(i=0; i<length; i++)
	{
		if(str[i]=='z')        //or "str[i]=='r'"
		{
			counter0++;
		}
		if(str[i]=='n')
		{
			counter1++;
		}
	}
	for(; counter1>0; counter1--)      //or "while(counter1--)"
	{
		cout<<"1"<<" ";
	}
	for(; counter0>0; counter0--)      //or "while(counter0--)"
	{
		cout<<"0"<<" ";
	}
	return 0;
}
