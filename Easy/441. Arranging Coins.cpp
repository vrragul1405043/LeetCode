class Solution {
public:  
    
    int arrangeCoins(int n) {
        
        if(n<=1)
            return n;
        
        return floor(-0.5+sqrt((double)2*n+0.25));
    }
};