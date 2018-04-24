#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void Print(list<int> a)
{
	list<int>::iterator it;
	cout << "List: ";
	for(it = a.begin(); it != a.end(); it++)
		cout << *it << " ";
	cout << endl;
}

int main(void)
{
	list<int> a, b;	//declare list

	for(int i = 0; i < 10; i++){
		a.push_back(i + 1);			//add element to the end
		b.push_front(i - 1);		//add element to the first
	}

	Print(a);
	Print(b);

	b.sort();
	cout << "Sorted ";
	Print(b);

	a.reverse();
	cout << "Reverse ";
	Print(a);

	cout << "a.front(): " << a.front() << endl;
	cout << "b.back(): " << b.back() << endl;

	return 0;
}
