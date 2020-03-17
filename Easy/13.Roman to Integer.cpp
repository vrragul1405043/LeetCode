class Solution {
public:
    int romanToInt(string s) {
    static map<char,int> roman_numbers = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
    int i = 0;
    int res = 0;
    int prev_val = 0;
    while(s[i]!='\0')
    {
        if(prev_val==0)
        {
            prev_val = roman_numbers[s[i]];
        }
        else
        {
            if(prev_val < roman_numbers[s[i]])
            {
                res = res + (roman_numbers[s[i]] - prev_val);
                prev_val = 0;
            }
            else
            {
                res = res + prev_val;
                prev_val = roman_numbers[s[i]];
            }
        }
        i++;
    }
    if(prev_val>0)
    {
        res+= prev_val;
    }
    return res;
    }
};