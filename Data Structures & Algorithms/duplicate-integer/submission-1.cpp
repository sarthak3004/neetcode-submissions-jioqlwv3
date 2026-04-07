class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        for(int i = 0; i < n-1; i++) {
            if(sortedNums[i] == sortedNums[i+1]) {
                return true;
            }
        }
        return false;
    }
};