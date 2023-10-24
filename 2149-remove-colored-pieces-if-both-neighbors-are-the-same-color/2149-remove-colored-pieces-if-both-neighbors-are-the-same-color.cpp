class Solution
{
    public:
        bool winnerOfGame(string s)
        {
            int n = s.size();
            int a = 0, b = 0;
            for (int i = 1; i < n - 1; i++)
            {
                if (s.substr(i - 1, 3) == "AAA") a++;
                if (s.substr(i - 1, 3) == "BBB") b++;
            }
            return a > b ? true : false;
        }
};