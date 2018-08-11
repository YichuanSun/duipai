#include <bits/stdc++.h>
using namespace std;

int main()  {
    char a[1005],b[1005],c[1005];
    scanf("%s",a);
    for (int i=0;i<strlen(a)/2;i++)
        swap(a[i],a[strlen(a)-i-1]);
    memset(b,0,sizeof(b));
    for (int i=0;i<strlen(a);i++)    {
        a[i]-='0';
        if (a[i]*2>9)   {
            b[i]+=a[i]*2%10;
            b[i+1]++;
        }
        else    b[i]+=a[i]*2;
        a[i]+='0';
    }
    for (int i=0;i<strlen(b);i++)    b[i]+='0';
    for (int i=0;i<strlen(b)/2;i++)
        swap(b[i],b[strlen(b)-i-1]);
    strcpy(c,b);
    sort(b,b+strlen(b));
    sort(a,a+strlen(a));
    if (strcmp(a,b)==0)   cout<<"Yes\n";
    else    cout<<"No\n";
    cout<<c<<endl;
    return 0;
}

