class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedSorted;
        for(int i = 0; i < nums.size(); i++) {
            indexedSorted.push_back({nums[i], i});
        }
        sort(indexedSorted.begin(), indexedSorted.end());
        int left = 0, right = nums.size() - 1;
        while(left < right) {
            int currSum = indexedSorted[left].first + indexedSorted[right].first;
            if(currSum == target) {
                if(indexedSorted[left].second < indexedSorted[right].second) {
                    return {indexedSorted[left].second, indexedSorted[right].second};
                }else {
                    return {indexedSorted[right].second, indexedSorted[left].second};
                }
            } else if(currSum < target) {
                left += 1;
            } else {
                right -= 1;
            }
        }
        return {};
    }
};
