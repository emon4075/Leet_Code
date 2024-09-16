class Solution
{
    public:
        bool isPowerOfTwo(int n)
        {
            if (n <= 0)
            {
                return false;
            }
            n = (long long) n;
            int i = log2(n);
            long long res = pow(2, i);
            if (res == n)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};