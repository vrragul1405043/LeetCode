class Solution {
public:
    
    int sumSquare(int n)
    {
        int sum = 0;
        while(n)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }    
    
    bool isHappy(int n) {
        int slow = n;
        int fast = sumSquare(n);
        
        while(slow!=fast)
        {
            slow = sumSquare(slow);
            fast = sumSquare(sumSquare(fast));
        }    
        return slow==1;
    }
};