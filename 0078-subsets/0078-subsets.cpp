class Solution {
public:
    vector<vector<int>> Result;
    void SubSet(int i, vector<int> V, vector<int> Temp) {
        if (i >= V.size()) {
            Result.push_back(Temp);
            return;
        }
        Temp.push_back(V[i]);
        SubSet(i + 1, V, Temp);
        Temp.pop_back();
        SubSet(i + 1, V, Temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> Temp;
        SubSet(0, nums, Temp);
        return Result;
    }
};