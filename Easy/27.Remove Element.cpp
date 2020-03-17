class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        if(nums.size()<=0)
        {
            return 0;
        }    
        int index = 0;
        for(auto i = 0; i<nums.size(); i++)
        {
            if(nums[i]!=val)
            {
                nums[index++]=nums[i];
            }    
        }
        return index;  
    }
};