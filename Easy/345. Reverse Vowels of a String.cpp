class Solution {
            
public:
    
    bool isVowel(char c)
    {
        return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c== 'I' || c=='o' || c=='O' || c == 'u' || c=='U';
    }    
    string reverseVowels(string s) {
        
        if(s.size()<=1)
            return s;
        
        int i=0;
        int j=s.size()-1;
        
        while(i<j)
        {
            while(i<j && !isVowel(s[i]))i++;
            while(i<j && !isVowel(s[j]))j--;
            if(i<j)
                swap(s[i++],s[j--]);
        }    
       return s; 
    }
};