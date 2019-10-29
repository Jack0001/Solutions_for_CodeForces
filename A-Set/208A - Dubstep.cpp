#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin>>str;
	while(1)
    	{
    		if(str.find("WUB")==0)
    		{
    			str.erase(0,3);
    		}
    		else
    		{
    			if(str.find("WUB")!=string::npos) //string::npos==-1
    			{
    				int pos=str.find("WUB");
					str.replace(pos,1," ");
					str.erase(pos+1,2);
    			}
    			else
    			{
    				break;
   	 		}
    		}
    	}
    	cout<<str<<endl;
}
