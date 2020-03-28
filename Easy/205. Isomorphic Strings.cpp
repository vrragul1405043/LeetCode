class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        
        int len = s.size();
        int label = 1;
        map<char, int> string_map;
        map<char, int> target_map;
        
        for(int i=0;i<len;i++)
        {
            if(string_map[s[i]]!=target_map[t[i]])
                return false;
            
            if(string_map[s[i]] == 0)
            {
                string_map[s[i]] = label;
                target_map[t[i]] = label;
            }    
            label++;    
        } 
        return true;
    }
};