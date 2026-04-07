class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueNums(nums.begin(), nums.end());
        return uniqueNums.size() < nums.size();
    }
};