class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int pos = n - 1;
        vector<int> res(n);
        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                res[pos]=leftSquare;
                left++;
            }else{
                res[pos]=rightSquare;
                right--;
            }
            pos--;
        }
        return res;
    }
};

