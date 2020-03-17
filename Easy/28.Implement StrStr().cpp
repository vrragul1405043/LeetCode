class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.empty())
        {
            return 0;
        }
        int needle_length = needle.length();
        
        int i=0;
        int j=0;
        int res = -1;
        
        while(i<haystack.length() && j<needle.length())
        {
            if(haystack[i]!=needle[j])
            {
                    if(needle_length<needle.length())
                    {
                        i=res+1;
                        j=0;
                        needle_length = needle.length();    
                    }
                    else
                    {
                        i++;
                    }        
            }
            else
            {
                if(needle_length == needle.length())
                {
                    res = i;
                }
                i++;
                j++;
                needle_length--;
            }    
        }
        
        if(needle_length==0)
        {
            return res;
        }    
        return -1;       
    }
};