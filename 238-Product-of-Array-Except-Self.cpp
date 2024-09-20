class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int ans = 1;
        for (int num: nums) {
            ans *= num;
        }
        vector<int> v;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                int ans1 = 1;
                for (int j = 0; j < nums.size(); ++j) {
                    if (j != i) {
                        ans1 *= nums[j];
                    }
                }
                v.push_back(ans1);
            } else {
                v.push_back(ans / nums[i]);
            }
        }
        return v;
    }
};