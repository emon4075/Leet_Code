class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int j = 0;
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i + 1] < arr[i]) {
                break;
            }
            else{
                j++;
            }
        }
        return j;
    }
};