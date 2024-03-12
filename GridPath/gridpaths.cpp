#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main()
{
    int M = 1e9 + 7;
    ll n;
    cin>>n;
    vector<vector<char> > v(n, vector<char>(n, 0));
    vector<vector<ll> > dp(n, vector<ll>(n, 0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
 
    for (ll i=0;i<n;i++){
        if(v[0][i]=='.'){
            dp[0][i]=1;
        }
        else break;
    }
 
    for(ll i=0;i<n;i++){
        if(v[i][0]=='.') dp[i][0]=1;
        else break;
    }
 
    for(ll i=1;i<n;i++){
        for (ll j=1;j<n;j++){
            if(v[i][j]=='.') dp[i][j]=(dp[i-1][j]+dp[i][j-1])%M;
        }
    }
    cout<<dp[n-1][n-1]<<'\n';
    return 0;
}