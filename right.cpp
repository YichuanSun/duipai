#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

char s[25], r[25];
map<int, int> sm, rm;
int main()
{
    gets(s+1);
    int len = strlen(s+1);
    for (int i = len; i > 0; --i){
        ++sm[s[i] - '0'];
        r[i] += (s[i] - '0') * 2;
        if (r[i] >= 10){
            ++r[i-1];
            r[i] -= 10;
        }
        ++rm[r[i]];
    }
    if (r[0] > 0){
        ++rm[r[0]];
    }
    printf("%s\n", (rm == sm) ? "Yes":"No");
    if (r[0] > 0) printf("%d", r[0]);
    for (int i = 1; i <= len; ++i){
        printf("%d", r[i]);
    }
    printf("\n");
    return 0;
}
