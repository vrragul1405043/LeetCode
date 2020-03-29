class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size()<ransomNote.size())
            return false;
        
        unordered_map<char,int> lookUp;
        int magazineSize = magazine.size();
        int ransomNoteSize = ransomNote.size();
        
        for(int i=0;i<magazineSize;i++)
            lookUp[magazine[i]]++;
        
        for(int i=0;i<ransomNoteSize;i++)
        {
            if(--lookUp[ransomNote[i]]<0)
                return false;
        }
        return true;
    }
};