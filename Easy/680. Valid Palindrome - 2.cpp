class Solution {
  public:

  bool isPalindrome(string s, int i, int j) {
      while (i < j) {
        if (s[i++] != s[j--])
          return false;
      } //end while
      return true;
    }

  bool validPalindrome(string s) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
      if (s[i] != s[j])
        return isPalindrome(s, i, j - 1) || isPalindrome(s, i + 1, j);
      i++;
      j--;
    } //end while
    return true;
  }//end func
};