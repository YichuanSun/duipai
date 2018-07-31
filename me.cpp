#include <bits/stdc++.h>
using namespace std;
string a;
int calsum(string a);
void printEnglish(int Sum);
void printDigits(int ch);
stack<int> digits;
int main()  {
    getline(cin,a);
    int Sum=calsum(a);
    printEnglish(Sum);
    return 0;
}

int calsum(string a)    {
    int s=0;
    //for (string::iterator ite=a.begin();ite!=a.end();ite++) s+=*ite-'0';
    for (int i=0;i<a.size();i++)    s+=(int)(a[i]-'0');
    return s;
}

void printEnglish(int sum) {
    int b;
    while (sum!=0)  {
        b=sum%10;
        digits.push(b);
        sum/=10;
    }
    if (!digits.empty())   {
        printDigits(digits.top());
        digits.pop();
    }
    while (!digits.empty()) {
        cout<<' ';
        printDigits(digits.top());
        digits.pop();
    }
    cout<<endl;
}

void printDigits(int ch)   {
    switch(ch)    {
        case 1: printf("one");break;
        case 2: printf("two");break;
        case 3: printf("three");break;
        case 4: printf("four");break;
        case 5: printf("five");break;
        case 6: printf("six");break;
        case 7: printf("seven");break;
        case 8: printf("eight");break;
        case 9: printf("nine");break;
        case 0: printf("zero");break;
        default: return;
    }
}


