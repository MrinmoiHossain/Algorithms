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
    for(int i = 0; i < b.length(); i++){                   //small string
        c = 0;
        m = "";
        for(int j = 0; j < a.length(); j++){               //big string
            int into = (a[j] - '0') * (b[i] - '0') + c;
            c = into / 10;
            m += (into % 10) + '0';
        }
        if(c > 0)
            m += (c % 10) + '0';

        reverse(m.begin(), m.end());                       //first multiplication result
        for(int j = a.length(); j < a.length() + i; j++)
            m += "0";

        if(i == 0)
            s = m;

        if(i != 0){
            c = 0;
            s = add(s, m);
        }
    }

    bool flag = 0;
    for(int i = 0; i < s.length(); i++){                //check the output zero or somethings
        if(s[i] != '0'){
            flag = 1;
            break;
        }
    }
    if(!flag)
        s = "0";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    return s;
}
