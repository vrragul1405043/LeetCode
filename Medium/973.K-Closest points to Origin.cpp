class Solution {
  public:
    vector < vector < int >> kClosest(vector < vector < int >> & points, int K) {

      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      vector < vector < int >> result;
      auto comparator = [](vector < int > & a, vector < int > & b) {
        return ((a[0] * a[0]) + (a[1] * a[1])) < ((b[0] * b[0]) + (b[1] * b[1]));
      };

      priority_queue < vector < int > , vector < vector < int >> , decltype(comparator) > max_heap(comparator);

      for (auto & point: points) {
        max_heap.push(point);

        if (max_heap.size() > K)
          max_heap.pop();
      }

      while (!max_heap.empty()) {
        result.push_back(max_heap.top());
        max_heap.pop();
      }//end while
      return result;
    }//end func
};