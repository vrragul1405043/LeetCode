class Solution
{
public:
  vector < int >plusOne (vector < int >&digits)
  {

    if (!digits.size ())
      return vector < int >
      {
      };

    int high = digits.size () - 1;

    while (high >= 0)
      {
	if (digits[high] == 9)
	  {
	    digits[high] = 0;
	    high--;
	  }
	else
	  {
	    digits[high] += 1;
	    return digits;
	  }
      }
    digits[0] = 1;
    digits.push_back (0);
    return digits;
  }
};
