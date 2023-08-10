class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0,en=numbers.size()-1;
        while(st<=en){
            if(numbers[st]+numbers[en]==target){
                return {st+1,en+1};
            }
            else if(numbers[st]+numbers[en]<target){
                st++;
            }
            else {
                en--;
            }
        }
        return {-1,-1};
    }
};