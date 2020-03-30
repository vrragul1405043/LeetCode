class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char res = 0;
        
        int n1 = s.size();
        int n2 = t.size();
        
        for(int i=0;i<n2;i++)
            res = res^t[i];
        for(int i=0;i<n1;i++)
            res = res^s[i];
        return res;
    }
};