class Solution {
  public:
    vector < int > productExceptSelf(vector < int > & nums) {

      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int size = nums.size();
      vector < int > result(size, 1);
      int right_product = nums[size - 1];

      for (int i = size - 2; i < size; i++) {
        result[i] = result[i - 1] * nums[i - 1];
      }

      for (int i = size - 2; i >= 0; i--) {
        result[i] = result[i] * right_product;
        right_product = right_product * nums[i];
      }
      return result;

    }
};