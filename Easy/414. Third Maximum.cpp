class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int>S(nums.begin(),nums.end());
        priority_queue<int> pq(S.begin(),S.end());
        if(pq.size() == 1 || pq.size() == 2) return pq.top();
        pq.pop();
        pq.pop();
        return pq.top();
    }
};

//Without Extra space

class Solution {
public:
    int thirdMax(vector<int>& nums) {
      int n = nums.size();
      long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;  
      for(int i=0;i<n;i++)
      {
          if(nums[i]==first || nums[i]==second || nums[i]==third)
              continue;
          
          if(nums[i]>first)
          {
              third = second;
              second = first;
              first = nums[i];
          }
          else if(nums[i]>second)
          {
              third = second;
              second = nums[i];
          }    
          else if(nums[i]>third)
          {
              third = nums[i];
          }    
      }    
      return (third == INT_MIN)?first:third; 
    }
};