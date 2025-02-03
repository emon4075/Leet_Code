class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int Count = 0;
        for (int i = 0; i < expected.size(); i++) {
            if (heights[i] != expected[i]) {
                Count++;
            }
        }
        return Count;
    }
};