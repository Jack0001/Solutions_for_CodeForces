#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long Sasha,Masha,price,max,give1,give2,debt=0;
	cin >> Sasha >> Masha >> price;
	max = (Sasha + Masha) / price;
	give1 = Sasha % price;
	give2 = Masha % price;
	if(give1 > give2 && Sasha / price + Masha / price != max)
		debt = price - give1;
	if(give1 <= give2 && Sasha / price + Masha / price != max)
		debt = price - give2;
	cout << max << " " << debt;
	return 0;
}
