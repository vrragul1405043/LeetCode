class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1)
            return s.length();
        
        int maxLength = INT_MIN;
        map<char,int>lookUp;
        int windowStart=0;
        int windowEnd=0;
        while(windowEnd<s.length())
        {
            if(lookUp[s[windowEnd]]==0)
            {
                lookUp[s[windowEnd]]++;
                windowEnd++;
                maxLength = max(maxLength,(int)lookUp.size());
            }
            else
            {
                lookUp.erase(s[windowStart]);
                windowStart++;
            }    
                
            // while(windowEnd-windowStart+1!=lookUp.size())
            // {
            //     if(lookUp[s[windowStart]]-1==0)
            //         lookUp.erase(s[windowStart]);
            //     else
            //         lookUp[s[windowStart]]--;
            //     ++windowStart;
            // }
            
        }
        return maxLength;
    }
};