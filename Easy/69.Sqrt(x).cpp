class Solution
{
public:
  int mySqrt (int x)
  {
    if (x <= 1)
      return x;
    long r = x;
    while (r * r > x)
        r = (r + x / r) / 2;
      return r;
  }
};
