class Solution
{
    public:
        int Count = 0;
    int countDigits(int num)
    {
        int Temp = num;
        while (Temp > 0)
        {
            int Rem = Temp % 10;
            Temp /= 10;
            if (num % Rem == 0)
            {
                Count++;
            }
        }
        return Count;
    }
};