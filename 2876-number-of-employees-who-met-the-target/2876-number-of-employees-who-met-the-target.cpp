class Solution
{
    public:
        int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
        {
            int Count = 0;
            for (auto H: hours)
            {
                if (H >= target)
                {
                    Count++;
                }
            }
            return Count;
        }
};