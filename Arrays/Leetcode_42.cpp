#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n,0);
        vector<int>right(n,0);
        int ans=0;
        int maxi =-1;
        for(int i=0; i<n; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
                left[i] = maxi;
            }else{
                left[i] = maxi;
            }
        }
        int maxiR =-1;
        for(int i=n-1; i>=0; i--){
            if(arr[i] > maxiR){
                maxiR=arr[i];
                right[i] = maxiR;
            }else{
                right[i] =maxiR;
            }
        }
        for(int i =0; i<n; i++){
            int mini = min(left[i],right[i]);
            ans += mini-arr[i];
        }
       return ans;
    }
};