#include <bits/stdc++.h>
using namespace std;

int dp[100];

int Fib(int n);

int main(void)
{
	for(int i = 0; i < 100; i++) dp[i] = -1;

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
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	if(dp[n] != -1)
		return dp[n];
	return dp[n] = Fib(n - 1) + Fib(n - 2);
}
