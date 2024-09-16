class Solution
{
    public:
        bool isPowerOfTwo(int n)
        {
            n = (long long)n;
            if (n == 1)
                return true;
            else
            {
                long long i = 1;
                while (true)
                {
                    if (i == n)
                    {
                        return true;
                    }
                    if (i > n)
                    {
                        return false;
                    }
                    i *= 2;
                }
            }
        }
};