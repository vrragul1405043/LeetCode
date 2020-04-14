class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        auto comparator = [](pair<int,int>& a, pair<int,int>&b)
        {
            return a.second>b.second;
        };
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(comparator)> min_heap(comparator);
        
        int nums_size = nums.size();
        unordered_map<int,int>m;
        vector<int> res;
        
        for(int i=0;i<nums_size;i++)
            m[nums[i]]++;   
        
        for(auto& frequency : m )
        {
            min_heap.push({frequency.first,frequency.second});
            if(min_heap.size()>k)
                min_heap.pop();
        } 
        
        while(!min_heap.empty())
        {
            res.push_back(min_heap.top().first);
            min_heap.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;       
    }
};