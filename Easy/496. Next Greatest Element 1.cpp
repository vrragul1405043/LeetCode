class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n2 = nums2.size();
        int n1 = nums1.size();
        
        stack<int>s;
        unordered_map<int,int>m;
        
        for(int i=0;i<n2;i++)
        {
            while(!s.empty() && s.top()< nums2[i])
            {
                m[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        
        for(int i=0;i<n1;i++)
        {
            if(m[nums1[i]]==0)
                nums1[i]=-1;
            else
               nums1[i]=m[nums1[i]]; 
        }    
        return nums1;
    }
};