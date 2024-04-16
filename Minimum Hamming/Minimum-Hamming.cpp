#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int sol=0;
    for(int i=0;i<32;i++){
        int c=0;
        for(int k=0;k<n;k++){
            c += (v[k]>>i)&1;
        }
        sol += c*(n-c);
    }
    cout<<sol<<'\n';
}