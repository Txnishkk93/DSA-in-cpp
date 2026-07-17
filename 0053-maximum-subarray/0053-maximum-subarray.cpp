class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int bestEnding = arr[0];
        int ans = arr[0];
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            int v1 = bestEnding + arr[i];
            int v2 = arr[i];

            bestEnding = max(v1, v2);
            ans = max(ans, bestEnding);
        }
        return ans;
    }
};