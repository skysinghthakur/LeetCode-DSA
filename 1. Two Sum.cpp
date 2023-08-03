class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> v(2);
        for(int i=0;i<nums.size();i++)
        {
            if(umap[target-nums[i]])
            {
                v[0] = umap[target-nums[i]]-1;
                v[1] = i;
                return v;
            }
            else
                umap[nums[i]]=i+1;
        }
        return v;
    }
};