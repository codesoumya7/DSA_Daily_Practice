class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int last[256];
        fill(last, last + 256, -1);

        int l = 0, ans = 0;

        for (int r = 0; r < s.size(); r++) {

            if (last[s[r]] >= l)
                l = last[s[r]] + 1;

            ans = max(ans, r - l + 1);

            last[s[r]] = r;
        }

        return ans;
    }
};