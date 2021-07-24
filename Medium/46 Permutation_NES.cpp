class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        permuteUtil(nums, 0, result);
        return result;
    }
    
    void permuteUtil(vector<int>&nums, int ind, vector<vector<int>>&result){
        if(ind == nums.size()){
            result.push_back(nums);
            return;
        }
        
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            permuteUtil(nums, ind+1, result);
            swap(nums[ind],nums[i]);
        }
        
    }
};