class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>m;
        int count = 0;
        int size = nums.size();
        int max_length = 0;
        for(int i=0;i<size;i++)
        {
            count+=(nums[i])?1:-1;
        
            if(count==0)
                max_length = std::max(max_length,i+1);
            else
            {
                if(m.find(count)!=m.end())
                    max_length = std::max(max_length, i-m[count]);
                else
                    m[count]=i;
            }    
                 
        }
        
        return max_length;
        
    }
};