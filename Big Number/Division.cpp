#include <bits/stdc++.h>
#define LL long long int
using namespace std;

string division(string a, LL b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        string a;
        LL b;
        cin >> a >> b;

        cout << division(a, b) << endl;
    }

    return 0;
}

string division(string a, LL b)
{
    string s;
    LL sum = 0, d;
    bool flag = 0;

    for(int i = 0; i < a.length(); i++){
        sum = sum * 10 + (a[i] - '0');
        d = sum / b;
        if(d == 0 && !flag)
            continue;
        else{
            s += (d + '0');
            flag = 1;
            sum = (sum % b);
        }
    }

    if(!flag)
        s = "0";

    return s;
}
