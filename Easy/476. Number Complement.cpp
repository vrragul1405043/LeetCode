class Solution {
public:
    int findComplement(int num) {
        int power = 1;
        int res= 0;
        while(num>0)
        {
            res+= (num%2 ^1)* power;
            power<<=1;
            num>>=1;
        }
        return res;
    }
};