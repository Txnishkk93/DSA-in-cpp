class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int pos = n - 1;
        vector<int> res(n);
        while (left <= right) {
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];

            if (leftsq > rightsq) {
                res[pos] = leftsq;
                left++;
            } else {
                res[pos] = rightsq;
                right--;
            }
            pos--;
        }
        return res;
    }
};