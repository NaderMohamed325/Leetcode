#include <vector>
#include <algorithm>

class Solution {
public:
    bool search(std::vector<int>& nums, int target) {
        return std::find(nums.begin(), nums.end(), target) != nums.end();
    }
};