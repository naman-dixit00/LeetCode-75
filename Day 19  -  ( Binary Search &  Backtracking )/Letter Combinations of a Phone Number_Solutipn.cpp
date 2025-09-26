#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> result;
    string mapping[10];

    Solution() {
        mapping[0] = "";
        mapping[1] = "";
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";
    }

    void backtrack(string digits, int index, string current) {
        if (index == (int)digits.size()) {
            result.push_back(current);
            return;
        }
        int digit = digits[index] - '0';
        string letters = mapping[digit];
        for (int i = 0; i < (int)letters.size(); i++) {
            backtrack(digits, index + 1, current + letters[i]);
        }
    }

    vector<string> letterCombinations(string digits) {
        result.clear();
        if (digits.empty()) return result;
        backtrack(digits, 0, "");
        return result;
    }
};

int main() {
    Solution s;
    string digits;
    cout << "Enter digits: ";
    cin >> digits;

    vector<string> ans = s.letterCombinations(digits);
    cout << "Combinations are:\n";
    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i] << "\n";
    }
    return 0;
}
