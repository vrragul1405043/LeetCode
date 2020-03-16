class Solution {
public:
    long int temp = 0;
    int reverse(int x) {  
        if(x/10 == 0)
        {
            temp = (temp*10) + x;
            return temp;
        }
        else
        {
            temp = (temp*10) + (x%10);
            reverse(x/10);
        }
      return temp;  
    }
    
    bool isPalindrome(int x) {
        
        if(x<0)
        {
            return false;
        }    
        else
        {
        int x_reverse = reverse(x);
        return x==x_reverse;    
        }    
        
    }
};