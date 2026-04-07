class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        for(int num : nums) {
            if(++freqMap[num] > (nums.size() / 2)) {
                return num;
            }
        }
    }
};