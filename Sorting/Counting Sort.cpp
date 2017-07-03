//Runtime: O(N+n), here N is the higest number
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;	//take input 1..n

	vector<int> arr(10, 0);	//all input value is < 10
	for(int i = 0, a; i < n; i++){
		cin >> a;
		arr[a]++;
	}

	cout << "Sorted Array is: ";
	for(int i = 0; i < 10; i++)
		for(int j = 0; j < arr[i]; j++)
			cout << i << " ";

	cout << endl;

	return 0;
}
