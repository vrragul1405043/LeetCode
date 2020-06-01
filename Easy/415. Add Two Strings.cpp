class Solution {
public:
    string addStrings(string num1, string num2)
    {

        string result;

        int num1_iterator = num1.size() - 1;
        int num2_iterator = num2.size() - 1;
        int carry = 0;

        while (num1_iterator >= 0 || num2_iterator >= 0 || carry > 0) {
            unsigned int sum = 0;
            sum += (num1_iterator >= 0) ? num1[num1_iterator--] - '0' : 0;
            sum += (num2_iterator >= 0) ? num2[num2_iterator--] - '0' : 0;
            sum += carry;
            result = to_string(sum % 10) + result;
            carry = sum / 10;
        }
        return result;
    }
};