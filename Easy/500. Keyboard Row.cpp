class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        //store the lines of alphabets(a-z) in the keyboard a-1, b-2,...e-0
        int v[26] = {1,2,2,1,0,1,1,1,0,1,1,1,2,2,0,0,0,0,1,0,0,2,0,2,0,2};
        vector<string> res;
        
        for(int i=0;i<words.size();i++)
        {
            string s = words[i];
            int j;
            for(j=0;j<s.size()-1;j++)
            {
                if(v[tolower(s[j])-'a']!=v[tolower(s[j+1])-'a'])
                    break;
            }
            if(j==s.size()-1)
                res.push_back(s);
        }    
        return res;
    }
};