class Solution {
public:
    string removeDuplicates(string S) {
        int slow = 0;
        for(int fast = 0; fast < S.length(); fast++)
        {
            if(slow==0 || S[slow-1]!=S[fast])
                S[slow++]=S[fast];
            else
                slow--;
        }
        return S.substr(0,slow);
    }
};