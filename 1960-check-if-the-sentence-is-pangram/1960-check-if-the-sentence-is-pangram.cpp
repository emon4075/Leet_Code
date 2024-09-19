class Solution
{
    public:
        bool checkIfPangram(string sentence)
        {
            int A[26] = { 0 };
            for (auto C: sentence)
            {
                A[C - 'a']++;
            }
            for (auto i: A)
            {
                if (i == 0)
                {
                    return false;
                }
            }
            return true;
        }
};