class Solution {
public:
    
    string commonUtil(string s1, string s2)
    {
        int i = 0;
        int j = 0;
        string res = "";
        while(i<s1.length() && j<s2.length())
        {
            if(s1.at(i)!=s2.at(j))
            {
                break;
            }
            else
            {
                res.push_back(s1[i]);
            }   
         ++i;
         ++j;         
        }
       return res;
    }    
    
    string longestCommonPrefix(vector<string>& strs) {
        
        string temp = "";
        
        if(strs.size()==0)
        {
          return "";    
        }
        else
        {
            temp = strs[0];
        }    
        for(int i=1;i<strs.size();i++)
        {
            if(!temp.empty())
            {
                temp = commonUtil(temp,strs[i]);
            }
            else
            {
                return "";
            }    
        }    
      return temp;
    }
};