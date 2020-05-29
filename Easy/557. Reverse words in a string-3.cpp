class Solution {
public:
    void reverse(string& s, int start, int end)
    {
        while(start<end)
            std::swap(s[start++],s[end--]);
    }    
        
    string reverseWords(string s) {
        int size = s.size();
        int start = 0;
        for(int i=0;i<size;i++)
        {
            if(s[i]==' ')
            {
                reverse(s,start,i-1);
                start = i+1;
            }   
        }
        reverse(s,start,size-1);
        return s;
    }
};