class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n = word.size();
        int capitalCount = 0;
        
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))
                capitalCount++;
        }
        
        return capitalCount == word.size() || capitalCount == 0 || capitalCount == 1 && isupper(word[0]);
    }
};