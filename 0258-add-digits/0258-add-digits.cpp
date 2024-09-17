class Solution
{
    public:
        int addDigits(int num)
        {
            while (true)
            {
                if (num < 10)
                {
                    return num;
                }
                int Sum = 0;
                while (num > 0)
                {
                    Sum += (num % 10);
                    num = num / 10;
                }
                num = Sum;
            }
        }
};