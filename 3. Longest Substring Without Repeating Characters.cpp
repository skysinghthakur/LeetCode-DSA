class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> index(256, -1);
        int res=0,st=-1;
        for (int i=0;i<s.length();i++) {
            if (index[s[i]] > st)
                st = index[s[i]];
            index[s[i]] = i;
            res = max(res,i-st);
        }
        return res;
    }
};