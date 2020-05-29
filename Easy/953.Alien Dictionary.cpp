class Solution {
  public:
    bool isAlienSorted(vector < string > & words, string order) {

      unordered_map < char, int > alien_map;

      int order_size = order.size();
      int words_size = words.size();

      for (int i = 0; i < order_size; ++i)
        alien_map[order[i]] = i;

      for (int i = 0; i < words_size - 1; i++) {
        string s1 = words[i];
        for (int j = i + 1; j < words_size; ++j) {
          string s2 = words[j];
          int min = std::min(s1.size(), s2.size());
          for (int k = 0; k < min; k++) {
            if (alien_map[s1[k]] < alien_map[s2[k]]) break;
            else if (alien_map[s1[k]] > alien_map[s2[k]]) return false;
            else if (k == min - 1 && s1.size() > s2.size()) return false;
          }//end for k
        }//end for j
      }//end for i
      return true;
    }
};