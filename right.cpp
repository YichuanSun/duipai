#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    int t = num.length(), sum = 0;
    for(int i = 0; i < t; ++i) {
        sum += int(num[i] - '0');
    }
    if(sum == 0) {
        cout << "zero";
    }
    stack<int>S;
    while(sum != 0) {
        S.push(sum % 10);
        sum /= 10;
    }
    bool space = false;
    while(!S.empty()) {
        int n = S.top();
        S.pop();
        if(space) {
            cout << " ";
        }
        space = true;
        switch(n) {
        case 0:
            cout << "zero";
            break;
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        }
    }
    return 0;
}
