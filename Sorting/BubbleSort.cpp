//Runtime: O(n*n)
#include <bits/stdc++.h>
#define For(a) for(int i = 0; i < a; i++)
using namespace std;

void bubbleSort(int arr[], int n);

int main(void)
{
    int n;
    cin >> n;
    int arr[n];

    For(n)
        cin >> arr[i];

    cout << "Array is: ";
    For(n)
        cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr, n); //Sorting the array
    cout << "Sorted Array is-ascending: ";
    For(n)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < (n - i) - 1; j++){
            if(arr[j] > arr[j+1])   // use '<' sign for sorting descending order
                swap(arr[j], arr[j+1]);
        }
    }
}
