class Solution {
public:
    int rob(vector<int>& nums) {
     
        int adj1= 0;
        int adj2= 0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i%2 == 0)
                adj1 = std::max(adj1+nums[i], adj2);
            else
                adj2=std::max(adj2+nums[i],adj1);
        }
        return std::max(adj1,adj2);
    }
};