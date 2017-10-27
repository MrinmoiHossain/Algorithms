#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	queue<int> q;
	for(int i = 1; i <= 5; i++)
		q.push(i);

	cout << "Size of queue: " << q.size() << endl;
	cout << "Last value of queue: " << q.back() << endl;
	cout << "The queue" << endl;
	while(!q.empty()){
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}
