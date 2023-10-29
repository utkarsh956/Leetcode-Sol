class Solution
{
    long long helper(int n, vector<int> &v, int k, vector < long long > &dp)
    {
        if (n < 0) return 0;
        if (dp[n] != -1) return dp[n];
        long long mn = LLONG_MAX;
        for (int i = n; i > n - 3; i--)
        {
            long long x = 0;
            if (i >= 0)
            {
                x = max(0, k - v[i]) + helper(i - 1, v, k, dp);
            }
            mn = min(mn, x);
        }
        return dp[n] = mn;
    }
    public:
        long long minIncrementOperations(vector<int> &v, int k)
        {
            int n = v.size();
            vector < long long > dp(n, -1);
            return helper(n - 1, v, k, dp);
        }
};