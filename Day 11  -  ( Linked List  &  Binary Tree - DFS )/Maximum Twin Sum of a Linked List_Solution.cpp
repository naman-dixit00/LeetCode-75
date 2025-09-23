#include <iostream>
#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> arr;
        while (head != NULL) {
            arr.push_back(head->val);
            head = head->next;
        }
        int n = arr.size();
        int maxSum = 0;
        for (int i = 0; i < n/2; i++) {
            int twin = arr[i] + arr[n-1-i];
            if (twin > maxSum) maxSum = twin;
        }
        return maxSum;
    }
};
