#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

typedef pair<int, int>PII;

bool cmp(PII A, PII B)
{
    return A.second * B.first > A.first * B.second;
}

int fractional_knapsack(vector<PII> v, int w)
{
    int vs = v.size(), ans = 0;
    for(int i = 0; i < vs; i++){
        int z = min(w, v[i].first);
        w -= z;
        ans += z * v[i].second;
    }
    return ans;
}

int main(void)
{
    read();
    int n, w;       //n->belongs to opportunity and w->belongs to how much can carry
    cin >> n >> w;
    vector<PII> v;
    for(int i = 0, weight, price; i < n; i++){
        cin >> weight >> price;

        v.push_back(PII(weight, price));
    }
    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;
    //int maximumCost = fractional_knapsack(v, w);

    //cout << "Maximum Cost: " << maximumCost << endl;

    return 0;
}
