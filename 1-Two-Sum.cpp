using namespace std;
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        fast();
        vector<int>v;
        int l=0,r=nums.size()-1;std::sort(nums.begin(), nums.end());
        while(l<r and r<nums.size()){
            if(nums[l]+nums[r]==target){
                v.push_back(l);
                v.push_back(r);
            }else if(nums[l]+nums[r]>target){
                r--;
            }else{
                l++;
            }
        }
        return v;
    }
};