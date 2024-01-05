class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        res.emplace_back(nums[0]);
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(res.back()<nums[i]){
                res.emplace_back(nums[i]);
            } else {
                int idx = lower_bound(res.begin(),res.end(),nums[i]) - res.begin();
                res[idx] = nums[i];
            }
        }
        return res.size();
    }
};
