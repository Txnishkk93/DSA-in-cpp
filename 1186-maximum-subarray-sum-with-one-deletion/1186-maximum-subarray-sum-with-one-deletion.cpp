class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int best = arr[0];
        int ans = arr[0];
        int del = 0;

        for (int i = 1; i < arr.size(); i++) {
            int previous_keep=best;

            best = max(best + arr[i], arr[i]);
            del = max(del +arr[i], previous_keep);

            ans = max(ans, max(best,del));
        }
        return ans;
    }
};