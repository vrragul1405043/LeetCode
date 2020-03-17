class Solution {
public:
    int trailingZeroes(int n) {
       int number_of_fives = 0;
        while(n>=5)
        {
            number_of_fives = number_of_fives + floor(n/5);
            n/=5;
        }    
     return number_of_fives;   
    }
};