class Solution {
public:
    void sortColors(vector<int>& a) {
        
        int l=0;
        int c=0;
        int h=a.size()-1;
        
        while(c<=h)
        {
            if(a[c]==0)
                swap(a[l++],a[c++]);
            else if(a[c]==1)
                c++;
            else
                swap(a[c],a[h--]);
        }    
    }
};