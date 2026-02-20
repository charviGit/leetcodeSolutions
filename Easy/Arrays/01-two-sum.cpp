// Problem: Two Sum (LeetCode #1)
// Difficulty: Easy
// Approach: Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> m;

        for (int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i];

            if (m.find(complement) != m.end()) {
                return {m[complement], i};
            }

            m[arr[i]] = i;
        }

        return {};
    }
};
