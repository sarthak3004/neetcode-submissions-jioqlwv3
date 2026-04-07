class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, k = s.size();
        string t = "";
        while(i < k) {
            if(isalnum(s[i])) {
                t += tolower(s[i]);
            }
            i += 1;
        }
        i = 0;
        int j = t.size()-1;
        while(i < j) {
            if(t[i] != t[j]) {
                return false;
            }
            i += 1;
            j -= 1;
        }
        return true;
    }
};
