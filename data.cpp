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
	int n,m,t;
	n=rand()%101;
	m=rand()%1001;
	t=rand();
	//printf("%d %d\n",n,m);
	//printf("%d",t);
	printf("%d\n",n);
	printf("%d",rand()%100001);
	for (int i=0;i<n;i++)	{
		if (rand()&1)	printf(" %d",rand());
		else	printf(" %d",-1*rand());
	}
	printf("\n");
	return 0;
}
