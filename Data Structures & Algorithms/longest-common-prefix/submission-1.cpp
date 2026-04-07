class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) {
            return strs[0];
        }
        string lcp = LCPUtil(strs[0], strs[1]);
        if(strs.size() == 2) {
            return lcp;
        }
        for(int i = 2; i < strs.size(); i++) {
            lcp = LCPUtil(lcp, strs[i]);
        }
        return lcp;
    }

    string LCPUtil(string s, string t) {
        int i = 0;
        string ans = "";
        while(i < min(s.size(), t.size())) {
            if(s[i] == t[i]) {
                ans += s[i];
                i += 1;
            } else {
                break;
            }
        }
        return ans;
    }
};