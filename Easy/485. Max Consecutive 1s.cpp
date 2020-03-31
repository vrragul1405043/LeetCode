class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxi = 0;
        int current = 0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                current+=1;
                maxi = std::max(current,maxi);
            }
            else
                current = 0;
        }    
        return maxi;
    }
};