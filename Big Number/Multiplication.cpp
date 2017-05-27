#include <bits/stdc++.h>
using namespace std;

string add(string a, string b);
string multi(string a, string b);

int main(void)
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        string a, b;
        cin >> a >> b;

        cout << "Case #" << i << ": " << multi(a, b) << endl;
    }

    return 0;
}

string add(string a, string b)
{
    string s;
    if(a.length() < b.length())
        swap(a, b);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

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

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(s.begin(), s.end());

    return s;
}

string multi(string a, string b)
{
    string s;                                               //output string "S"

    reverse(a.begin(), a.end());                            //reverse the string for multiplication
    reverse(b.begin(), b.end());                            //reverse the string for multiplication

    if(a.length() < b.length())
        swap(a, b);                                        //String a is big and b is small

    string m;
    int c = 0;
    for(int i = 0; i < a.length(); i++){
        c = 0;
        m = "";
        for(int j = 0; j < b.length(); j++){
            int into = (a[i] - '0') * (b[j] - '0') + c;
            c = into / 10;
            m += (into % 10) + '0';
        }
        if(c > 0)
            m += (c % 10) + '0';

        reverse(m.begin(), m.end());
        for(int j = b.length(); j < b.length() + i; j++)
            m += "0";
        reverse(m.begin(), m.end());

        if(i == 0)
            s = m;

        if(i != 0){
            c = 0;
            reverse(s.begin(), s.end());
            reverse(m.begin(), m.end());
            s = add(s, m);
            reverse(s.begin(), s.end());
        }
    }

    bool flag = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '0'){
            flag = 1;
            break;
        }
    }
    if(!flag)
        a = "0";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(s.begin(), s.end());
    return s;
}
