#include <iostream>
#include <vector>
#include <climits>

using namespace std;

 
vector <int> pairsumbrute (){
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    int n = nums.size();
    vector<int> ans;

    int i=0,j=n-1;
    while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        } else if(pairSum<target){
            i++;
        }else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> ans = pairsumbrute();

    if (ans.size() >= 2) {
        cout << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}