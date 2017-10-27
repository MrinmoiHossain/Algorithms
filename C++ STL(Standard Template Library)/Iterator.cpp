#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(void)
{
	vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(i * i);

	vector<int>::iterator it;
	vector<int>::reverse_iterator rit;
	
	cout << "First to Last" << endl;
	for(it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
	cout << endl;

	cout << "Last to First" << endl;
	for(rit = v.rbegin(); rit != v.rend(); rit++)
		cout << *rit << endl;
	cout << endl;

	return 0;
}
