class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> freq;
        for(int i = 0; i < s.length(); i++) {
            freq[s[i]] += 1;
            freq[t[i]] -= 1;
        }
        for (auto i : freq) {
            if(i.second != 0) {
                return false;
            }
        }
        return true;
    }
};
