class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int officer = 1;
        for (int cm = 1; cm < nums.size(); cm++) {
            if (nums[cm] != nums[officer - 1]) {
                nums[officer] = nums[cm];
                officer++;
            }
        }
        return officer;
    }
};