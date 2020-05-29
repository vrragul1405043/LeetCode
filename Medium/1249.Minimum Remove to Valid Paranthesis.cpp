class Solution {
  public:
    string minRemoveToMakeValid(string s) {

      string res;
      int S = s.size();
      stack < int > st;
      
      for (int i = 0; i < S; ++i) {
        if (s[i] == '(') st.push(i);
        else if (s[i] == ')') {
          if (!st.empty()) st.pop();
          else s[i] = '#';
        }//end else if
      }//end for

      while (!st.empty()) {
        s[st.top()] = '#';
        st.pop();
      }

      for (char c: s) {
        if (c == '#') continue;
        else res += c;
      }

      return res;
    }//end func
};