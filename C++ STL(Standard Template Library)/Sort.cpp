#include <iostream>
#include <cstdlib>                      //using for rand()
#include <vector>                       //using for vector
#include <algorithm>                    //using for sort()
using namespace std;

struct Point{
    double x, y;
}point[3];

bool cmp(Point A, Point B)
{
    if(A.x != B.x) return A.x < B.x;
    return A.y < B.y;
}

int main(void)
{
    int arr[7] = {3, 2, 7, 1, 4, 6, 5}; //Declare Array for sorting
    //sort(Start Index Number, Before Last Index Number)
    sort(arr, arr + 5);                 //Sort from 0 to 5
    for(int i = 0; i < 7; i++)
        cout << arr[i] << endl;

    cout << endl;

    vector<int> a;
    for(int i = 1; i <= 7; i++)
        a.push_back(rand() % 100);
    sort(a.begin(), a.end());           //Sort a vector
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << endl;

    cout << endl;
    //Structure for Sorting
    for(int i = 0; i < 3; i++){
        point[i].x = 14.0 - 1.3 * i;
        point[i].y = 13.0 - 1.5 * i;
    }
    cout << "Unsorted Structure" << endl;
    for(int i = 0; i < 3; i++)
        cout << point[i].x << " " << point[i].y << endl;
    cout << "Sorted Structure" << endl;
    sort(point, point + 3, cmp);            //Sorting a Structure, here cmp is function
    for(int i = 0; i < 3; i++)
        cout << point[i].x << " " << point[i].y << endl;
    cout << endl;

    return 0;
}
