class Solution {
public:
    string reverseStr(string s, int k) {
        if(k>=s.size())
        {
            reverse(s.begin(),s.end());
            return s;
        }
        int size = s.size();
        for(int i=0;i<size;i+=2*k)
        {
            int start = i;
            int end = std::min(start+k-1,size-1);
            while(start<end)
                std::swap(s[start++],s[end--]);
        }
        return s;
    }
};