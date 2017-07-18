#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll mod(string s, ll n);

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();

	string s;
	ll n;
	for(int i = 1; i <= T; i++){
		cin >> s >> n;
		
		cout << "Case #" << i << ": " << mod(s, n) << endl;
	}

	return 0;
}

ll mod(string s, ll n)
{
	ll sum = 0;

	for(int i = 0; i < s.length(); i++){
		sum = sum * 10 + (s[i] - '0');
		sum %= n;
	}

	return sum;
}
