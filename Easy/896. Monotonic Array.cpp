class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool isIncreasing = true;
        bool isDecreasing = true;
        int size = A.size();
        for(int i=0;i<size-1;i++)
        {
           if(A[i]>A[i+1])
               isIncreasing = false;
           if(A[i]<A[i+1])
               isDecreasing = false;
        }    
        return isIncreasing || isDecreasing;
    }
};