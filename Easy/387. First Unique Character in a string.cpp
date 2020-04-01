class Solution {
public:
    int firstUniqChar(string s) {
        int list[256] = {0};
        int n = s.size();
        for(int i=0;i<n;i++)
            list[s[i]]++;
        
        for(int i=0;i<n;i++)
            if(list[s[i]]==1)
                return i;
        
        return -1;
        
    }
};