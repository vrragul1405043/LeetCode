class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tLen = t.size();
        int sLen = s.size();
        int sIdx = 0;
        
        for(int i=0;i<tLen;i++)
            if(t[i]==s[sIdx])
                ++sIdx;
        
        return sIdx == sLen;
    }
};