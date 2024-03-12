#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
 
void solve(vector<ll> dp){
    int n;
    cin>>n;
    if(n<=0) cout<<0<<'\n';
    else cout<<dp[n]<<'\n';
}
 
int main(){
    int n = 1e6 + 1;
    int M = 1e9 + 7;
    vector<ll> dp(n+1,1);
    dp[2]=2;
    dp[3]=4;
    dp[4]=8;
    dp[5]=16;
    for(ll i=6;i<=1e6;i++){
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]+dp[i-4] + dp[i-5] + dp[i-6]) % M;
    }
    ll t;
    cin>>t;
    while(t--){
        solve(dp);
    }
    return 0;
}