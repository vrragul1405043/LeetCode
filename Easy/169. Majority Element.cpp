class Solution
{
public:
  int majorityElement (vector < int >&nums)
  {
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < nums.size (); i++)
      {
	if (nums[i] != candidate)
	  {
	    if (count - 1 == 0)
	      candidate = nums[i];
	    else
	      count -= 1;
	  }
	else
	    count += 1;
      }
    return candidate;
  }
};
