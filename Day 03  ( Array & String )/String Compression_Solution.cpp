#include <vector>
#include <string>
#include <iostream>
#include <algorithm> // for reverse
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;

        for (int i = 0; i < (int)chars.size();) {
            char letter = chars[i];
            int count = 0;

            while (i < (int)chars.size() && chars[i] == letter) {
                ++count;
                ++i;
            }

            chars[ans++] = letter;

            if (count > 1) {
                string cntStr = intToStr(count);
                for (size_t j = 0; j < cntStr.size(); j++) {
                    chars[ans++] = cntStr[j];
                }
            }
        }

        return ans;
    }

private:
    string intToStr(int num) {
        string res;
        while (num > 0) {
            res.push_back(char('0' + num % 10));
            num /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution sol;
    vector<char> chars;
    chars.push_back('a');
    chars.push_back('a');
    chars.push_back('b');
    chars.push_back('b');
    chars.push_back('c');
    chars.push_back('c');
    chars.push_back('c');

    int newLen = sol.compress(chars);

    cout << "New length = " << newLen << "\nCompressed: ";
    for (int i = 0; i < newLen; i++) {
        cout << chars[i];
    }
    cout << endl;
    return 0;
}
