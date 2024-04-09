#include "bits/stdc++.h"
#define ll long long
#define srv(v) sort(v.begin(), v.end())
#define fo(i, a, b) for (ll i = a; i < b; i++)
#define str string
#define sz size()
#define dv(v) vector<ll> v
#define ds(s) set<ll> s
#define dm(mp) map<ll, ll> mp
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 7;

int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m;
    cin>>m;
    vector<ll> nums(m);
    for(int i=0;i<m;i++) cin>>nums[i];
    cin>>n;
    ll s=0,c=0,patch=0;
    while(s<n) {
        if(c!=m && nums[c]<=s+1) {
            s+=nums[c];
            c++;
        }
        else{
            patch++;
            if (s>(INT_MAX-1)/2) {
                s=INT_MAX;
            }
            else{
                s=s*2+1;
            }
        }
    }
    cout<<patch<<'\n';
}