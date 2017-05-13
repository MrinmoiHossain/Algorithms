//Time complexity: O(n^2)
#include <bits/stdc++.h>
#define For(n) for(int i = 0; i < n; i++)
using namespace std;

void selectionSort(int arr[], int n);

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

    selectionSort(arr, n);

    cout << "Sorted array is: ";
    For(n)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}
