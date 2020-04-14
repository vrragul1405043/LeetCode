class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string res;
        for(auto& c : s)
        {
            if(st.empty() || st.top().first!=c)
                st.push({c,1});    
            else
            {
                if(st.top().second+1<k)
                    st.top().second+=1;    
                else
                    st.pop();    
            }        
        }
        
        while(!st.empty())
        {
            while(st.top().second!=0)
            {
                res+=st.top().first;
                st.top().second--;
            }    
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};