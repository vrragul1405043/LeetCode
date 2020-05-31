class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k)
    {

        unordered_map<string, int> word_count;

        for (string word : words)
            word_count[word] += 1;

        auto comparator = [](pair<string, int>& a, pair<string, int>& b) {
            return a.second == b.second ? a.first < b.first : a.second > b.second;
        };

        priority_queue<pair<string, int>, vector<pair<string, int> >, decltype(comparator)>
            min_heap(comparator);

        vector<string> res;

        for (auto& entry : word_count) {
            min_heap.push({ entry.first, entry.second });

            if (min_heap.size() > k)
                min_heap.pop();
        }

        while (!min_heap.empty()) {
            res.insert(res.begin(), min_heap.top().first);
            min_heap.pop();
        }
        return res;
    }
};
