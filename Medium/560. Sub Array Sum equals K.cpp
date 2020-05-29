class Solution {
  public:
    int subarraySum(vector < int > & nums, int k) {

      int res = 0;
      unordered_map < int, int > sum_freq;
      int curr_sum = 0;
      int nums_size = nums.size();

      for (int i = 0; i < nums_size; ++i) {
        curr_sum += nums[i];

        if (curr_sum == k)
          res++;

        if (sum_freq.find(curr_sum - k) != sum_freq.end())
          res += sum_freq[curr_sum - k];

        sum_freq[curr_sum]++;

      }
      return res;
    }
};