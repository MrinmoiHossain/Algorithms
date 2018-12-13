#include <bits/stdc++.h>
using namespace std;

int Fib(int n);

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;

		cout << "Case #" << i << ": " << Fib(n) << endl;
	}

	return 0;
}

int Fib(int n)
{
    int v[n+1];
    v[0] = 0, v[1] = 1;

    for(int i = 2; i <= n; i++){
        v[i] = v[i-1] + v[i-2];
    }
	return v[n];
}
