class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        
        vector<string> res;
        istringstream ss(A + " "+ B);
        unordered_map<string,int>m;
        while(ss>>A)m[A]++;
        
        for(auto i: m)
            if(i.second == 1)
                res.push_back(i.first);
        
        return res;
        
    }
};