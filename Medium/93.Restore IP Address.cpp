class Solution {
public:
    bool isValid(string s)
    {

        if (s.size() > 1 && s[0] == '0')
            return false;

        if (stoi(s) <= 255 && stoi(s) >= 0)
            return true;

        return false;
    }

    vector<string> restoreIpAddresses(string s)
    {
        int s_size = s.size();

        if (s_size > 12 || s_size < 4)
            return {};

        vector<string> result;

        for (int i = 1; i < 4; ++i) {
            string first = s.substr(0, i);

            if (!isValid(first))
                continue;

            for (int j = 1; i + j < s_size && j < 4; ++j) {
                string second = s.substr(i, j);

                if (!isValid(second))
                    continue;

                for (int k = 1; i + j + k < s_size && k < 4; ++k) {
                    string third = s.substr(i + j, k);
                    string fourth = s.substr(i + j + k);

                    if (isValid(third) && isValid(fourth)) {
                        string ip = first + "." + second + "." + third + "." + fourth;
                        result.push_back(ip);
                    }
                }
            }
        }
        return result;
    }
};
