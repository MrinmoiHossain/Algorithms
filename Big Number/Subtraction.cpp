#include <bits/stdc++.h>
using namespace std;

string subtraction(string a, string b);
int cmp(string a, string b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        string a, b;
        cin >> a >> b;

        cout << "Case #" << i << ": " << subtraction(a, b) << endl;
    }

    return 0;
}

string subtraction(string a, string b)
{
    string s;

    if(cmp(a, b) == 0)
        return "0";
    if(cmp(a, b) == -1){
        swap(a, b);
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    return s;
}

int cmp(string a, string b)
{
    if(a.length() > b.length())
        return 1;                       //string a is big
    if(a.length() < b.length())
        return -1;
    else{

    }
}
