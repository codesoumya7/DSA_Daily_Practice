class Solution {
public:
    int perfectSum(vector<int>& arr, int sum) {

        int n = arr.size();
        const int MOD = 1000000007;

        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

        // With 0 elements, only sum 0 can be formed
        dp[0][0] = 1;

        for (int i = 1; i <= n; i++) {

            for (int j = 0; j <= sum; j++) {

                // Don't take arr[i-1]
                dp[i][j] = dp[i - 1][j];

                // Take arr[i-1]
                if (arr[i - 1] <= j) {
                    dp[i][j] =
                        (dp[i][j] + dp[i - 1][j - arr[i - 1]]) % MOD;
                }
            }
        }

        return dp[n][sum];
    }
};