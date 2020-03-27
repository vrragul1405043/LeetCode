class Solution {
public:
    bool isPalindrome(string s) {
        string alpha;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                alpha.push_back(s[i]+32);
            
            if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9')
                alpha.push_back(s[i]);   
        }    
        for(int i=0,j=alpha.size()-1;i<j;i++,j--)
        {
            if(alpha[i]!=alpha[j])
                return false;
        }  
        return true;
    }
};