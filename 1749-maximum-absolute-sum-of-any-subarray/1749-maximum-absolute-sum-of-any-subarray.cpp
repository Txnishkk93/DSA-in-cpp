class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int maxSub=INT_MIN,curMax=0;
        int minSub=INT_MAX,curMin=0;

        for(auto &x:nums){
            curMax+=x;
            maxSub=max(maxSub,curMax);
            if(curMax<0){
                curMax=0;
            }
        }
        for(auto &x:nums){
            curMin+=x;
            minSub=min(minSub,curMin);
            if(curMin>0){
                curMin=0;
            }
        }
        return max(abs(maxSub),abs(minSub));
    }
};