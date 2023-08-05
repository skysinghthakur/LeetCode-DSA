class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(auto &i: nums){
            freq[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto &i: freq){
            pq.push({i.second,i.first});
        }
        vector<int> res;
        while(k-- && !pq.empty()){
            res.emplace_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};