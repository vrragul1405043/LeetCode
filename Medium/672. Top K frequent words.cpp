class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        vector<string>result;
        unordered_map<string,int>word_frequency;
        for(string word: words)
            word_frequency[word]++;
        
        auto comparator = [](pair<string, int>& a, pair<string, int>& b)
        { 
            return a.second == b.second ? a.first < b.first : a.second > b.second; 
        };
        
      priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(comparator)>minHeap(comparator);
        
        for(auto & entry : word_frequency)
        {
            minHeap.push({entry.first,entry.second});
            if(minHeap.size()>k)
                minHeap.pop();
        }
        
        while(!minHeap.empty())
        {
            result.push_back(minHeap.top().first);
            minHeap.pop();
        }
        reverse(result.begin(),result.end());
        
        return result;      
    }
};