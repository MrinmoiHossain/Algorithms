//Time complexity: O(n^2)
#include <bits/stdc++.h>
#define For(n) for(int i = 0; i < n; i++)
using namespace std;

void insertionSort(int arr[], int n);

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

    insertionSort(arr, n);

    cout << "Sorted Array is: ";
    For(n)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

void insertionSort(int arr[], int n)
{
    //In insertion sort, we will let the first element is sorted
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
