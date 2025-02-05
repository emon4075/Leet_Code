class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int trim = n * 0.05;

        long long sum = 0;
        for (int i = trim; i < n - trim; i++) {
            sum += arr[i];
        }
        double mean = (sum * 1.0) / (n - 2 * trim);
        return mean;
    }
};
