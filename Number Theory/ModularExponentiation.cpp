#include <bits/stdc++.h>
using namespace std;

//Time complexity: O(n)
int recursivePower(int a, int n)
{
	if(n == 0)
		return 1;
	return a * recursivePower(a, n - 1);
}

//Time complexity: O(log n)
int binaryExponentiation(int a, int n)
{
	if(n == 0)
		return 1;
	else if(n % 2 == 0)										//when n is even
		return binaryExponentiation(a * a, n / 2);
	else													//when n is odd
		return a * binaryExponentiation(a * a, (n - 1)/2);
}

//Time complexity: O(log n), Memory: O(1)
int modularExponentiation(int a, int n, int M)
{
	int ans = 1;
	while(n > 0){
		if(n % 2 == 1)
			ans = (ans * a) % M;
		a = (a * a) % M;
		n /= 2;
	}

	return ans;
}

int main(void)
{

}
