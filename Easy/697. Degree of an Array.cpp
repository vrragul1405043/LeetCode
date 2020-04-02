class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>first_seen;
        unordered_map<int,int>lookUp;
        int size = nums.size();
        int degree = 0;
        int shortest = 0;
        for(int i=0; i<size;i++)
        {
            if(first_seen[nums[i]] == 0)
            {
                first_seen[nums[i]]=i+1;
            }    
                
            lookUp[nums[i]]+=1;
            
            if(lookUp[nums[i]]>degree)
            {
                degree = lookUp[nums[i]];
                shortest = i-(first_seen[nums[i]]-1)+1;
            }
            else if(lookUp[nums[i]] == degree)
                shortest = min(shortest, i-(first_seen[nums[i]]-1)+1);    
        }    
        return shortest;
    }
};