class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<>());
        int Result1 = nums[0] * nums[1] * nums[2];
        int Result2 = nums[nums.size() - 1] * nums[nums.size() - 2] * nums[0];
        // int Result3 = nums[0] * nums[1] * nums[2];
        return max(Result1, Result2);
    }
};