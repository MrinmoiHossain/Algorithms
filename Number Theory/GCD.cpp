#include <bits/stdc++.h>
using namespace std;

//Time complexity: O(log (max(a, b)))
int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(void)
{
    return 0;
}
