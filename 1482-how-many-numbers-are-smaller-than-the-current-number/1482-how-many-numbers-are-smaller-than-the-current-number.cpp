class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> V(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] > nums[j]) {
                    V[i]++;
                }
            }
        }
        return V;
    }
};