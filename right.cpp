#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 10;
int a[maxn], num[maxn];

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++) {
        scanf("%d", &a[i]);
        if(a[i] < 0 || a[i] > n + 1) continue;
        else
            num[a[i]] ++;
    }

    for(int i = 1; i <= n; i ++) {
        if(num[i] == 0) {
           printf("%d\n", i);
           return 0;
        }
    }
    printf("%d\n", n + 1);
    return 0;
}

