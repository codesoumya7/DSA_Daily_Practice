class Solution {
public:

    int knapsackRec(int W, vector<int> &val, vector<int> &wt,
                    int n, int memo[][1002]) {

        if (n == 0 || W == 0) {
            return 0;
        }

        if (memo[n][W] != -1) {
            return memo[n][W];
        }

        if (wt[n-1] <= W) {
            return memo[n][W] = max( val[n-1] + knapsackRec(W - wt[n-1], val, wt, n-1, memo),
                knapsackRec(W, val, wt, n-1, memo)
            );
        }
        else {
            return memo[n][W] =
                knapsackRec(W, val, wt, n-1, memo);
        }
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {

        int n = val.size();

        int memo[1001][1002];
        memset(memo, -1, sizeof(memo));

        return knapsackRec(W, val, wt, n, memo);
    }
};