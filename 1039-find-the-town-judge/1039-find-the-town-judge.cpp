class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<vector<int>> Mat(n, vector<int>(n, 0));
        for (auto V : trust) {
            int First = V[0] - 1;
            int Second = V[1] - 1;
            Mat[First][Second] = 1;
        }
        for (int i = 0; i < n; i++) {
            int Count = 0;
            for (int j = 0; j < n; j++) {
                if (Mat[i][j] == 0) {
                    Count++;
                }
            }
            if (Count == n) {
                int trustedBy = 0;
                for (int j = 0; j < n; j++) {
                    if (j != i && Mat[j][i] == 1) {
                        trustedBy++;
                    }
                }
                if (trustedBy == n - 1) {
                    return i + 1;
                }
            }
        }
        return -1;
    }
};