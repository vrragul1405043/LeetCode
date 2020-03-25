class Solution {
public:
    int titleToNumber(string s) {
        
        unsigned long multiplier = 1;
        int total = 0;
        for(int i = s.length()-1; i>=0; i--)
        {
            total+= multiplier* (s[i]-'A'+1);
            multiplier *=26;
        }    
        return total;
    }
};