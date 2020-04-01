class Solution {
public:
    int longestPalindrome(string s) {
        
        int res = 0;
        unordered_map<char,int>m;
        int n=s.size();
        for(int i=0;i<n;i++)
            m[s[i]]++;
        
        for(int i=0;i<m.size();i++)
        {
            res+=((m[i]/2)*2);
            if(res%2==0 && m[i]%2==1)
                res+=1;
        }   
         return res;   
    }
};