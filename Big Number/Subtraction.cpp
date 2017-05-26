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
    bool Fmin = false;

    if(cmp(a, b) == 0)
        return "0";
    if(cmp(a, b) == -1){
        swap(a, b);
        Fmin = true;
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = b.length(); i < a.length(); i++)
        b += "0";

    for(int i = 0; i < a.length(); i++){
        if(a[i] < b[i]){

        }
        s += ((a[i] - b[i]) % 10) + '0';
    }

    if(Fmin)
        s += "-";

    reverse(s.begin(), s.end());                //reverse the string to get output string

    return s;
}

int cmp(string a, string b)
{
    if(a.length() > b.length())
        return 1;                                //string a is big
    if(a.length() < b.length())
        return -1;
    else{                                       //both strings are same, now compare individual value
        for(int i = 0; i < a.length(); i++){
            if(a[i] > b[i])
                return 1;
            if(a[i] < b[i])
                return -1;
        }
        return 0;                              //two strings are same, and their value is also same
    }
}
