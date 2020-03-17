class Solution
{
public:
  string countAndSay (int n)
  {
    string res = "1";
    if (n == 0)
      return "";
    if (n == 1)
      return res;
    while (n > 1)
      {
	string cur = "";
	for (int i = 0; i < res.size (); i++)
	  {
	    int count = 1;
	    while ((i + 1 < res.size ()) && (res[i] == res[i + 1]))
	      {
		count++;
		i++;
	      }
	    cur += to_string (count) + res[i];
	  }
	res = cur;
	n--;
      }
    return res;
  }
};
