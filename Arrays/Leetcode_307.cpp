#include <bits/stdc++.h>
using namespace std;
class NumArray {
private:
vector<int> nums;
int sum = 0;    
public:
    NumArray(vector<int>& numsArr) {
        nums=numsArr;
        for(auto x : nums)sum+=x;
    }
    
    void update(int index, int val) {
        if(index >=0 && index< nums.size()){
            sum-=nums[index];
            
            nums[index] = val;
            sum+=val;
        }
        
    }
    
    int sumRange(int left, int right) {
      int ans = sum;
      for(int i=0; i<left; i++){
        ans-=nums[i];
      }
      for(int i = right+1; i<nums.size(); i++){
        ans-=nums[i];
      }
      return ans;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */