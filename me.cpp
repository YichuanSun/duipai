#include <bits/stdc++.h>
#define N 1005
using namespace std;
void bigAdd(int a[]);
bool isPoli(int a[]);
void pr(int a[]);
int a[N],k;
int main()  {
    string s;
    cin>>s;
    scanf("%d",&k);
    for (int i=0;i<s.size();i++)
        a[i]=s[i]-'0';
    for (int i=s.size();i<N;i++)
        a[i]=10;
    int sum=0;
    for (int i=0;i<N;i++)   {
        if (a[i]!=10)   sum+=a[i];
    }
    if (sum==a[0])  {
        printf("%d\n0\n",a[0]);
        return 0;
    }
    for (int i=1;i<=k;i++)  {
        bigAdd(a);
        if (isPoli(a))  {
            pr(a);
            cout<<i<<endl;
            return 0;
        }
    }
    pr(a);
    cout<<k<<endl;
    return 0;
}
void bigAdd(int a[])    {
    int b[N],ans[N],m,cn=0;
    fill(ans,ans+N,0);
    for (m=N-1;m>=0;m--)   if (a[m]!=10)   break;
    for (int k=m;k>=0;k--)    b[cn++]=a[k];
    for (int i=0;a[i]!=10;i++)  {
        ans[i]+=a[i]+b[i];
        if (ans[i]>9)   {
            ans[i+1]+=ans[i]/10;
            ans[i]%=10;
        }
    }
    for (cn=N-1;ans[cn]==0;cn--);
    for (;cn>=0;cn--)   a[cn]=ans[cn];
}

bool isPoli(int a[])    {
    int siz=0;
    for (siz=N-1;a[siz]==10;siz--);
    for (int i=0;i<=siz/2;i++)  {
        if (a[i]!=a[siz-i]) return false;
    }
    return true;
}

void pr(int a[])    {
    for (int i=N-1;i>=0;i--)
        if (a[i]!=10)
            printf("%d",a[i]);
    printf("\n");
}

