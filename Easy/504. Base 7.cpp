class Solution {
public:
    string convertToBase7(int num) {
        
        if(num==0)
            return "0";
        int n = abs(num);
        string res = "";
        while(n)
        {
            res = to_string(n%7)+res;
            n/=7;
        }
        return (num<0)?"-"+res:res;    
    }
};