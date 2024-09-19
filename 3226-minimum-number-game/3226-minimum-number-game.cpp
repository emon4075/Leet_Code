class Solution
{
    public:
        vector<int> numberGame(vector<int> &nums)
        {
            vector<int> arr;
            sort(nums.begin(), nums.end());
            while (!nums.empty())
            {
                int A = nums.front();
                nums.erase(nums.begin());
                int B = nums.front();
                nums.erase(nums.begin());
                arr.push_back(B);
                arr.push_back(A);
            }
            return arr;
        }
};