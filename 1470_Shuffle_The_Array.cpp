// https://leetcode.com/problems/shuffle-the-array/submissions/1141386762/
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> New;
        int i = 0, j = n;
        while (j < 2 * n)
        {
            New.push_back(nums[i]);
            New.push_back(nums[j]);
            i++;
            j++;
        }
        return New;
    }
};