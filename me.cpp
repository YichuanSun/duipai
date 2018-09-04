#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,c=1;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    for (int i=0;i<n;i++)   {
        if (a[i]<c) continue;
        else if (a[i]==c){
            c++;
        }
        else    {
            cout<<c<<endl;
            break;
        }
    }
    return 0;
}

