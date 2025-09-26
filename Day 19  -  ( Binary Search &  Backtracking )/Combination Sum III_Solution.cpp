#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector< vector<int> > result;

    void backtrack(int start, int k, int n, vector<int>& current) {
        if (k == 0 && n == 0) {
            result.push_back(current);
            return;
        }
        if (k == 0 || n <= 0) return;

        for (int i = start; i <= 9; i++) {
            current.push_back(i);
            backtrack(i + 1, k - 1, n - i, current);
            current.pop_back();
        }
    }

    vector< vector<int> > combinationSum3(int k, int n) {
        result.clear();  // पुराना data clear करना जरूरी है
        vector<int> current;
        backtrack(1, k, n, current);
        return result;
    }
};

int main() {
    Solution s;
    int k, n;
    cout << "Enter k and n: ";
    cin >> k >> n;

    vector< vector<int> > ans = s.combinationSum3(k, n);

    cout << "Combinations are:\n";
    for (int i = 0; i < (int)ans.size(); i++) {
        for (int j = 0; j < (int)ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
