#include <bits/stdc++.h>
#define LL long long int
using namespace std;

string base(LL n, int b);       //Base Conversion Function

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        LL n;
        int b;
        cin >> n >> b;

        cout << "Case #" << i << ": " << base(n, b) << endl;
    }
    return 0;
}

string base(LL n, int b)
{
    string s;
    if(n == 0)
        return "0";

    while(n){
        int m = n % b;      //modulus
        if(m > 9){
            m -= 10;
            s += ('A' + m);
        }
        else
            s += (m + '0');

        n /= b;
    }

    reverse(s.begin(), s.end());

    return s;
}
