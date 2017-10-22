#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	stack<int> s;

	//insert
	for(int i = 1; i <= 7; i++)
		s.push(i);

	//size
	cout << "Stack size: " << s.size() << endl;

	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}
