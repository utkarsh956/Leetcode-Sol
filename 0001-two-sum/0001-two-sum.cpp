class Solution
{
    public:
        vector<int> twoSum(vector<int> &v, int k)
        {
            int n = v.size();
            map<int, int> mp;
            for (int i = 0; i < n; i++)
            {
                int p = k - v[i];
                if (mp.find(p) != mp.end()) return {
                    i,
                    mp[p]
                };
                else mp[v[i]] = i;
            }
            return {};
        }
};