#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int num);

int main(void)
{
    int arr[] = {3, 2, 1, 5, 4};
    int searchNum = 5;

    cout << (linear_search(arr, 5, searchNum) == -1? "Not Found":"Found") << endl;

    return 0;
}

int linear_search(int arr[], int n, int num)
{
    for(int i = 0; i < n; i++){
        if(num == arr[i])
            return 1;
    }
    return -1;
}
