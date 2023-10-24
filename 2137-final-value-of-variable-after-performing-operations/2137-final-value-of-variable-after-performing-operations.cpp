class Solution
{
    public:
        int finalValueAfterOperations(vector<string> &op)
        {
            int a = 0, n = op.size();
            for (auto &x: op)
            {
                if (x == "--X" || x == "X--") a--;
                else a++;
            }
            return a;
        }
};