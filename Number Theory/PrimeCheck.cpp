#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool isPrime(int n);

int main(void)
{
    int T;
    cin >> T;

    for(int tc = 1; tc <= T; tc++){
        int n;
        cin >> n;
        cout << "Case #" << tc << ": " << isPrime(n)? "Prime" : "Not prime" << endl;
    }

    return 0;
}

bool isPrime(int n)
{
    if(n < 2) return false;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
