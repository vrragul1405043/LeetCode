class Solution {
public:
    bool isValid(string s) {
        
        if(s.empty())
        {
            return true;
        }    
        
        stack <char> s1;
        
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='{' || s.at(i)=='(' || s.at(i)=='[')
            {
                s1.push(s.at(i));
            }
            else if(!s1.empty())
            {
                if(s.at(i)==']' && s1.top() == '[')
                {
                    s1.pop();
                }
                else if(s.at(i)==')' && s1.top() == '(')
                {
                    s1.pop();
                }
                else if(s.at(i)=='}' && s1.top() == '{')
                {
                    s1.pop();
                }
                else
                {
                    s1.push(s.at(i));     
                }    
            } //end else if
            else
            {
               s1.push(s.at(i));
            }//end else 
        }//end for
        return (s1.empty());
    }//end function
};