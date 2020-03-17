class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            
        int vec_size = nums.size();
        int count = 1;
        
        if(vec_size<=0)
        {
            return 0;
        }    
        for(int i = 1; i < vec_size ; i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[count++] = nums[i];
            }    
        }    
        nums.resize(count);
        return count;
    
    }
};