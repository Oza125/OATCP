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
    string num;
    cin>>num;
    ll k;
    cin>>k;
    stack<char>st;
    for(char c:num){
        while(!st.empty() && k>0 && st.top()>c){
            k--;
            st.pop();
        }
        if(!st.empty() || c!='0') st.push(c);
    }
    while(!st.empty() && k > 0) st.pop(), k--;
    string ans = "";
    while(!st.empty()) ans += st.top(), st.pop();
    reverse(ans.begin(), ans.end());
    if(ans.empty()) cout<<"0"<<'\n';
    else cout<<ans<<'\n';
}