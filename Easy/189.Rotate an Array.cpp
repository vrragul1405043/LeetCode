class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(nums.size()==0 || k==0 || k%nums.size()==0)
            return;
        
         int len = nums.size();
         k=k%len;
        
         if(k>1)    
            nums.insert(nums.begin(),nums.end()-k,nums.end());
        else
            nums.insert(nums.begin(),nums[nums.size()-1]);
        
         nums.resize(len);
    }
};