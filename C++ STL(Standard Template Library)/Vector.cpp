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

    vector<char> characters;
    characters.assign(5, 'a');          //assign() using
    for(int i = 0; i < characters.size(); i++)
        cout << characters[i] << endl;

    cout << endl;

    vector<double> d;
    d.assign(7, 1.777);                 //assign() for assigning double value
    for(int i = 0; i < d.size(); i++)
        cout << d[i] << endl;

    cout << endl;

    vector<int> e;
    for(int i = 3; i < 11; i++)
        e.push_back(i);
    while(!e.empty()){                  //if e is empty return 1, otherwise 0
        cout << e.front() << endl;      //front give front value of vector
        e.erase(e.begin());             //for delete element in the vector
    }

    cout << endl;

                                        //swap
    vector<int> f;
    for(int i = 1; i < 4; i++)
        f.push_back(i);
    vector<int> g;
    for(int i = 7; i < 10; i++)
        g.push_back(i);
    g.swap(f);                          //a vector swap to another vector
    for(int i = 0; i < f.size(); i++)
        cout << f[i] << endl;

    cout << endl;

    vector<int> h{1, 3, 5, 7, 9};       //this feature available in c++11
    for(size_t i = 0; i < h.size(); i++)//using size_t data type -> size_t same as unsigned int data type
        cout << "#" << i + 1 << ": " << h[i] << endl;
    cout << "Another way to print" << endl;
    for(int j : h)
        cout << j << endl;
    cout << "Another second way to print" << endl;
    for(auto m : h)                     //using auto for "for loop"
        cout << m << endl;
    cout << endl;



    return 0;
}
