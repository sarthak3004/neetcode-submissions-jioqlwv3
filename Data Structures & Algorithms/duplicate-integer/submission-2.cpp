class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueNums;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(uniqueNums.count(nums[i])) {
                return true;
            }
            uniqueNums.insert(nums[i]);
        }
        return false;
    }
};