class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned long int i = 1;
        while(i*i<=num)
        {
            if(i*i==num)
                return true;
            i+=1;
        }    
        return false;
    }
};