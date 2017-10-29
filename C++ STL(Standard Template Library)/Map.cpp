#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main(void)
{
	map<string, int> m;
	string s[] = {"aa", "bb", "cc", "dd", "ee"};
	for(int i = 0; i < 5; i++)
		m[s[i]] = (i * i);

	//Copy of a map
	map<string, int> cm(m.begin(), m.end());

	map<string, int>::iterator it;
	cout << "Map size: " << m.size() << endl;
	cout << "Out of the Map" << endl;
	for(it = m.begin(); it != m.end(); it++)
		cout << it->first << " " << it->second << endl;
	cout << endl;
	m.clear();

	cout << "Map size: " << m.size() << " after clear memory" << endl;

	
	cout << "Copy Map" << endl;
	for(it = cm.begin(); it != cm.end(); it++)
		cout << it->first << " " << it->second << endl;
	cout << endl;

	return 0;
}
