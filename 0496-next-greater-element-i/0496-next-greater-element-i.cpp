class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>next;
        stack<int>st;

        for(int n:nums2){
            while(!st.empty()&& st.top()<n){
                next[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }
        while(!st.empty()){
            next[st.top()]=-1;
            st.pop();
        }

        vector<int>res;
        res.reserve(nums1.size());

        for(int num:nums1){
            res.push_back(next[num]);
        }
        return res;
    }
};