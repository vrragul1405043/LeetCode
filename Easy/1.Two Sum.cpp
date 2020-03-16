class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //sort(nums.begin(),nums.end());
        vector<int> result;
        map<int, int> tracker; 
        
        for(int i=0;i<nums.size();i++)
        {
            auto itr = tracker.find(target-nums[i]);
                if(itr!=tracker.end())
                {
                    result.push_back(tracker[target-nums[i]]);
                    result.push_back(i);
                    return result;
                }
                else
                {
                    tracker.insert({nums[i],i});
                }    
                
        }    
        return result;
    }
};