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
    string s;                                           //additional output string
    if(a.length() < b.length())
        swap(a, b);

    reverse(a.begin(), a.end());                       //grater than string b
    reverse(b.begin(), b.end());                       //less than string a

    for(int i = b.length(); i < a.length(); i++)
        b += "0";

    int c = 0;
    for(int i = 0; i < a.length(); i++){
        int add = (a[i] - '0') + (b[i] - '0') + c;
        c = add / 10;
        s += (add % 10) + '0';
    }
    if(c > 0)
        s += (c % 10) + '0';

    reverse(a.begin(), a.end());                    //back to the old string - a
    reverse(b.begin(), b.end());                    //back to the old string - b
    reverse(s.begin(), s.end());                    //output string - s

    return s;
}
