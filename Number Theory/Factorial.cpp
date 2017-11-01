#include <bits/stdc++.h>
typedef unsigned long long int ull;
using namespace std;

//Time Complexity: O(n), Memory Complexity: O(1)
ull MemorySaveFactorial(int n)
{
	ull temp = 1;
	
	for(int i = 1; i <= n; i++)
		temp *= i;

	return temp;
}

//Time Complexity: O(n), Memory Complexity: O(n)
ull RecursiveFactorial(int n)
{
	if(n == 0)
		return 1;
	return n * RecursiveFactorial(n - 1);
}

int main(void)
{
	int n;
	n = 20;							//limit 0 to 20

	cout << "Memory Save" << endl;
	for(int i = 0; i <= n; i++)
		cout << "Number: " << i << ": " << MemorySaveFactorial(i) << endl;
	cout << endl;

	cout << "Recursive Formula" << endl;
	for(int i = 0; i <= n; i++)
		cout << "Number: " << i << ": " << RecursiveFactorial(i) << endl;
	cout << endl;

	return 0;
}
