#include <iostream> 
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <windows.h>
using namespace std;
//ofstream cout("data.in");
int main()
{
	srand(time(0));
//	srand( (unsigned)time( NULL ) );
	//freopen("input.txt","w",stdout); 
	int n,t,q;
	n=rand();
	for (int i=0;i<n;i++)	printf("%d\n",abs(rand()));
	return 0;
}
