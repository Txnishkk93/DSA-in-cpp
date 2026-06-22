class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count[2001]={0};
        for (int num : arr) {
            count[num + 1000]++;
        }
        sort(count, count + 2001);
        for (int i = 1; i < 2001; i++) {
            if (count[i] != 0 && count[i] ==count[i - 1]) {
                return false;
            }
        }
        return true;
    }
};