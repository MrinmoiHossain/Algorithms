#include <bits/stdc++.h>
using namespace std;

string add(string a, string b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        string a, b;
        cin >> a >> b;

        cout << "Case #" << i << ": " << add(a, b) << endl;
    }

    return 0;
}

string add(string a, string b)
{
    if(a.length() < b.length())
        swap(a, b);
}
