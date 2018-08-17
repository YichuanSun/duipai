
#include<vector>
#include <sstream>
#include<cmath>
#include<iomanip>
#include<iostream>
#include <ctype.h>
#include <stdlib.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	int n1 = (s.length()+2) / 3;//由n1<=n2 && n1*2 +n2+2= n分析可得，这里我一开始都没分析清楚	
	int n2 = s.length() - 2 * n1 + 2;
	for (int i = 0; i < n1 - 1; i++)
	{
		cout << s[i];
		for (int j = 0; j < n2-2; j++)
		{
			cout << " ";
		}
		cout << s[s.length() - 1 - i];
		cout << endl;
	}
 
	for (int i = n1 - 1; i < n1 - 1 + n2; i++)
	{
		cout << s[i];
	}	
 
	return 0;
}

