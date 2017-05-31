#include <iostream>
#include <vector>                       //using for vector
#include <iterator>                     //using for iterator
#include <cstdlib>                      //using for rand()
#include <algorithm>                    //using for sort()
using namespace std;

int main(void)
{
    vector<int> v;                      //One dimensional vector

    for(int i = 1; i <= 10; i++)
        v.push_back(i * i);             //vector value insert
    for(int i = 0; i < v.size(); i++)   //v.size() -> size of vector
        cout << v[i] << endl;           //vector value print

    cout << endl;

    vector<int> a(10, 0);               //10 elements size of vector with initialize value "0"
    for(int i = 0; i < a.size(); i++)
        cout << "# " << i + 1 << ": " << a[i] << endl;

    cout << endl;

    vector<int> b;
    vector<int>::iterator it;           //Iterator for print the value b
    for(int i = 1; i <= 7; i++)         //Initializing vector b
        b.push_back(i);
    for(it = b.begin(); it != b.end(); it++)    //Print vector b using iterator
        cout << *(it) << endl;

    cout << endl;

    vector<int> c;
    for(int i = 1; i <= 10; i++)        //Insert random value in C vector
        c.push_back(rand() % 100);      //Random value
    cout << "Unsorted C Vector" << endl;
    for(int j = 0; j < c.size(); j++)
        cout << c[j] << endl;
    sort(c.begin(), c.end());           //Sorting the vector "c"
    cout << "Sorted C Vector" << endl;
    for(int i = 0; i < c.size(); i++)
        cout << c[i] << endl;

    cout << endl;

    return 0;
}
