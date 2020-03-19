class Solution {
public:
    string minWindow(string s, string t) {
        const int no_of_chars = 256; 
        
        if(s.length()<t.length() || s.length()==0 || t.length()==0)
            return "";
        
        int minWindow = INT_MAX;
        int winLen = INT_MAX;
        int start = 0;
        int start_idx = -1;
        int hp[no_of_chars]={0};
        int hs[no_of_chars]={0};
        int count = 0;
        
        for(int j=0; j<t.length();j++)
            hp[t[j]]++;
        
        for(int i=0; i<s.length(); i++)
        {
           hs[s[i]]++;
           if(hp[s[i]]!=0 && hs[s[i]]<=hp[s[i]])
               count++;
            if(count == t.length())
            {
               while(hs[s[start]]>hp[s[start]] || hp[s[start]]==0)
               {
                  if(hs[s[start]]>hp[s[start]])
                      hs[s[start]]--;
                   start++;
               }//end while
               winLen = i-start+1;
               if(winLen < minWindow)
               {
                   minWindow = winLen;
                   start_idx = start;
               }    
            }//end if    
        }//end for    
        if(start_idx == -1)
            return "";
        return s.substr(start_idx, minWindow);
    }
};