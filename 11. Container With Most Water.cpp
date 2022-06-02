class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,res=0;
        while(i<j){
            int curr = min(height[j],height[i]);
            res = max(res,(j-i)*curr);
            while(height[j]<=curr && j>i)   j--;
            while(height[i]<=curr && i<j)   i++;
        }
        return res;
    }
};