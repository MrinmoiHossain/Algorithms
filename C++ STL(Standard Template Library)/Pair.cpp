#include <iostream>
#include <utility>		//for using of pair
using namespace std;

int main(void)
{
	pair<string, int> p;
	p.first = "hi";
	p.second = 999;
	cout << p.first << " " << p.second << endl;

	pair<string, int> p1;
	string s = "hello";
	int value = 30;
	p1 = make_pair(s, value);
	cout << p1.first << " " << p1.second << endl;

	pair<string, int> p2("see again", 70);
	cout << p2.first << " " << p2.second << endl;

	return 0;
}
