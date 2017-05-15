#include <bits/stdc++.h>
#define pb push_back
#define MAX 1100002
#define write() freopen("PrimeNumberList.txt", "w", stdout)
using namespace std;

void seive();

bool status[MAX];
vector<int> Prime;  //Prime from: 2 to 1099997

int main(void)
{
    write();
    seive();

    for(int i = 0; i < Prime.size(); i++)
        cout << Prime[i] << endl;

    return 0;
}

void seive()
{
    int limit = sqrt(MAX);

    status[0] = 1;
    status[1] = 1;

    for(int i = 4; i <= MAX; i += 2) status[i] = 1;

    Prime.pb(2);

    for(int i = 3; i <= MAX; i += 2){
        if(!status[i]){
            Prime.pb(i);

            if(i <= limit){
                for(int j = i * i; j <= MAX; j += i * 2)
                    status[j] = 1;
            }
        }
    }
}
