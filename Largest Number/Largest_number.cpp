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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<string> num;
    for(auto &it:v) num.push_back(to_string(it));
    sort(num.begin(),num.end(),[](string &s1,string &s2){return s1+s2>s2+s1;});
    string s;
    for(string &it:num) s+=it;
    if(s[0]=='0') cout<<0<<'\n';
    else cout<<s<<'\n';
}