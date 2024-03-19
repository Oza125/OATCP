#include "bits/stdc++.h"
#define ll long long
using namespace std;
const int N = 1e5 + 7;

int k;
int h[N];
int dp[N];

int func(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;
    for (int j = 1; j <= k; j++)
    {
        if (i - j >= 0)
            cost = min(cost, func(i - j) + abs(h[i] - h[i - j]));
    }
    return dp[i] = cost;
}

int main(){
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll m;
    cin >> m;
    ll b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] != -1)
            {
                if (abs(a[i] - b[j]) <= 1)
                {
                    ++count;
                    b[j] = -1;
                    break;
                }
            }
        }
    }
    cout << count << endl;
}