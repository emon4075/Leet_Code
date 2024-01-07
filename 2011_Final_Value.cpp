// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int Value = 0;
        for (string S : operations)
        {
            if (S == "++X" || S == "X++")
            {
                Value++;
            }
            else
            {
                Value--;
            }
        }
        return Value;
    }
};