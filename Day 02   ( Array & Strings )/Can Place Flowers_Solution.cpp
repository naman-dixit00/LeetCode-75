#include <vector>
using namespace std;

// LeetCode 605 - Can Place Flowers
// Time: O(n), Space: O(1)

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // If no flowers need to be planted, always return true
        if (n == 0) {
            return true ;
        }

        // Traverse the flowerbed to find valid spots for planting
        for (int i = 0; i < flowerbed.size(); i++) {
            // Check if current plot is empty and both neighbors are empty (or boundaries)
            if (flowerbed[i] == 0 && 
                (i == 0 || flowerbed[i - 1] == 0) && 
                (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                
                // Plant a flower here
                flowerbed[i] = 1;
                n--;

                // If all required flowers are planted, return true
                if (n == 0) {
                    return true;
                }
            }
        }

        // Not enough valid spots to plant all flowers
        return false;
    }
};
