class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> next;
        stack<int> st;

        for (int i = 0; i < nums2.size(); i++) {
            while (!st.empty() && st.top() < nums2[i]) {
                next[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        for (int n : nums1) {
            if (next.contains(n)) {
                res.push_back(next[n]);
            } else {
                res.push_back(-1);
            }
        }
        return res;
    }
};