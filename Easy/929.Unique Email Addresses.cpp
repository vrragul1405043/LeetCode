class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
    
        if(!emails.size())
            return 0;
        
    unordered_set<string> st;
    for(string &email : emails) {
        string cleanEmail;
        for(char c : email) {
            if(c == '+' || c == '@') break;
            if(c == '.') continue;
            cleanEmail += c;
        }
        cleanEmail += email.substr(email.find('@'));
        st.insert(cleanEmail);
    }
    return st.size();   
    }
};