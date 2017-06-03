#include <bits/stdc++.h>
#define MAX 100000000
using namespace std;

#define Check(n) (status[n/64] & (1 << ((n % 64) / 2)))
#define Set(n) (status[n/64] |= (1 << ((n % 64) / 2)))      // a |= b means a = a | b

int status[MAX/64 + 2];

void seive()
{
    int limit = sqrt(MAX);

    for(int i = 3; i <= limit; i += 2){
        if(!Check(i)){
            for(int j = i * i; j <= MAX; j += i + i)
                Set(j);
        }
    }

    cout << 2 << endl;
    for(size_t i = 3; i <= MAX; i += 2)
        if(!Check(i))
            cout << i << endl;
}

bool isPrime(int n)
{
    return n > 1 && (n == 2 || ((n & 1) && !Check(n)));
}
int main(void)
{
    seive();    //#Last Prime Number: 99999989

    return 0;
}
