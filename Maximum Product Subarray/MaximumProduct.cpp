#include "bits/stdc++.h"
using namespace std;

int maxProduct(vector<int>& nums) {
        int s1=0,s2=0,m=nums[0];
        for(int i=0;i<nums.size();i++){
            if(s1!=0){
                s1*=nums[i];
            }
            if(s2!=0){
                s2*=nums[nums.size()-1-i];
            }
            if(s1==0){
                s1=nums[i];
            }
            if(s2==0){
                s2=nums[nums.size()-1-i];
            }
            m=max(m,max(s1,s2));
        }
        return m;
    }
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        cout<<maxProduct(nums)<<'\n';
    }
}