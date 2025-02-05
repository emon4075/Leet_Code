class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int N = arr.size();
        int Min = INT_MAX;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < N - 1; i++) {
            Min = min(Min, (arr[i + 1] - arr[i]));
        }
        vector<vector<int>> V;
        for (int i = 0; i < N - 1; i++) {
            if ((arr[i + 1] - arr[i]) == Min) {
                V.push_back({arr[i], arr[i + 1]});
            }
        }
        return V;
    }
};