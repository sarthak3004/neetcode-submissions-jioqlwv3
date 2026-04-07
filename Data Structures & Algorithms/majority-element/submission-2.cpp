class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int arr[32] = {};
        for(int num: nums) {
            for (int i = 0; i < 32; i++) {
                arr[i] += (num >> i) & 1;
            }
        }
        int res = 0;
        for(int i = 0; i < 32; i++) {
            if(arr[i] > nums.size()/2) {
                res |= (1 << i);
            }
        }
        return res;
    }
};