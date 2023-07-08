#include <iostream>
using namespace std;

int main()
{
	string input;
	char temp;
	while(scanf("%c",&temp)!=EOF)
	{
		if(temp!='\n')
		{
			input+=temp;
		}
	}
	if(input[0]==input[8] && input[1]==input[7] && input[2]==input[6] && input[3]==input[5])
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}
