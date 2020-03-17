class Solution
{
public:
  int maxSubArray (vector < int >&nums)
  {
    int maxSum = INT_MIN;
    int tempSum = 0;

    for (int windowEnd = 0; windowEnd < nums.size (); windowEnd++)
      {
	tempSum += nums[windowEnd];
	if (tempSum > maxSum)
	  maxSum = tempSum;
	if (tempSum < 0)
	  tempSum = 0;
      }
    return maxSum;
  }
};
