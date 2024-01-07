// https://leetcode.com/problems/concatenation-of-array/
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> CPY;
        CPY = nums;
        for (int i = 0; i < CPY.size(); i++)
        {
            nums.push_back(CPY[i]);
        }
        return nums;
    }
};