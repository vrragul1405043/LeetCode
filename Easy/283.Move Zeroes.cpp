class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=0)
        {
            return;
        }
        int temp;
        int ptr1,ptr2;
        ptr1=ptr2=0;
        while(ptr1<nums.size() && ptr2<nums.size())
        {
            if(nums[ptr1]==0)
            {
                ptr1++;
            }
            else
            {
                temp=nums[ptr1];
                nums[ptr1]=nums[ptr2];
                nums[ptr2]=temp;
                ++ptr1;
                ++ptr2;
            }    
        }    
    }
};