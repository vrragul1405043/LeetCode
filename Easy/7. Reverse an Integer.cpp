class Solution {
public:
    long int temp = 0;
    int reverse(int x) {
         
        if(x/10 == 0)
        {
            if((temp*10 < INT_MAX) && (temp*10 > INT_MIN))
            {
                temp = (temp*10) + x;    
            }
            else
            {
                temp = 0;
            }    
        }
        else
        {
            temp = (temp*10) + (x%10);
            reverse(x/10);
        }
       return temp; 
    }    
};