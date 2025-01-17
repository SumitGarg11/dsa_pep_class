#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftP(n,1);
        vector<int> rightP(n,1);
        vector<int> ans(n);
        leftP[0] = 1;
        rightP[n-1] = 1;
        for(int i =1; i<n; i++){
            leftP[i] = leftP[i-1]*nums[i-1];
        }
        for(int i = n-2; i>=0; i--){
            rightP[i] = rightP[i+1]*nums[i+1];
        }
        for(int i =0; i<n; i++){
            ans[i] = leftP[i]*rightP[i];
        }
        return ans;

    }
};