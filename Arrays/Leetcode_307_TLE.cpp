#include <bits/stdc++.h> 
using namespace std;
class NumArray {
private:
vector<int> nums;
    
public:
    NumArray(vector<int>& numsArr) {
        nums=numsArr;
        
    }
    
    void update(int index, int val) {
        if(index >=0 && index< nums.size()){
            
            
            nums[index] = val;
           
        }
        
    }
    
    int sumRange(int left, int right) {
      int  sum = 0;
      for(int i=left; i<=right; i++){
        sum+=nums[i];
      }
      return sum;
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */