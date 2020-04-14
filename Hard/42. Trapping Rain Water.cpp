class Solution {
public:
    int trap(vector<int>& height) {
        if(!height.size())
            return 0;
        
        int res = 0;
        int size = height.size();
        vector<int> left (size,0);
        vector<int> right (size,0);
        
        left[0]=height[0];
        for(int i=1;i<size;i++)
            left[i]=max(height[i],left[i-1]);
        
        right[size-1]=height[size-1];
        for(int i=size-2;i>=0;i--)
            right[i]=max(height[i],right[i+1]);
        
        for(int i=0;i<size;i++)
            res+=min(left[i],right[i])-height[i];
        
        
        return res;
    }
};