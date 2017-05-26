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
            int j = i + 1;
            while(a[j] == '0' && j < a.length()){
                a[j] = '9';
                j++;
            }
            a[j]--;
            a[i] += 10;
        }
        s += ((a[i] - b[i]) % 10) + '0';         //subtraction the value
    }

    int l = a.length();
    while(s[l - 1] == '0'){                     //check the last digit, if it will "0", we need not print it, so that erase is from output string
        s.erase(s.end() - 1);
        l--;
    }

    if(Fmin)
        s += "-";                               //if b string is greater than a, then the result will be negative

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
