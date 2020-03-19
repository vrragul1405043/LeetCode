class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        if(!nums1.size() || !nums2.size())
            return vector<int>{};
            
        unordered_map<int, int> lookUp;
        vector<int> res;
        
        if(nums1.size()<=nums2.size())
        {
            for(int i=0; i<nums1.size();i++){
                if(lookUp.find(nums1[i])==lookUp.end())
                    lookUp[nums1[i]] = 1;
                else
                   continue; 
            }
            
            for(int j=0;j<nums2.size();j++){
                if(lookUp.find(nums2[j])!=lookUp.end() && lookUp[nums2[j]] > 0)
                {
                    res.push_back(nums2[j]);
                    lookUp[nums2[j]]=0;
                }       
                else
                  continue;
            }    
        }
        else
        {
            for(int i=0; i<nums2.size();i++){
                if(lookUp.find(nums2[i])==lookUp.end())
                    lookUp[nums2[i]] = 1;
                else
                   continue; 
            }
            
            for(int j=0;j<nums1.size();j++){
                if(lookUp.find(nums1[j])!=lookUp.end() && lookUp[nums1[j]] > 0)
                {
                    res.push_back(nums1[j]);
                    lookUp[nums1[j]]=0;
                }    
                else
                  continue;
            }    
        }    
        return res; 
    }
};