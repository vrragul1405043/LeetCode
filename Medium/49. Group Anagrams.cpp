class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        if(!strs.size())
            return {};
        
        unordered_map<string,vector<string>>m;
        vector<vector<string>>res;
        int size = strs.size();
        
        for(int i = 0;i<size;i++)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
            m[s].push_back(strs[i]);
        }
        
        for(auto it = m.begin(); it!=m.end();++it)
            res.push_back(it->second);
        
        return res;
        
    }
};