class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> umap;
        for(auto &i: strs){
            string s = i;
            sort(s.begin(),s.end());
            umap[s].emplace_back(i);
        }
        for(auto &i: umap){
            res.emplace_back(i.second);
        }
        return res;
    }
};