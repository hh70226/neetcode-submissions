class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dup(nums.begin(), nums.end());
        if(dup.size() < nums.size()){
            return true;
        }
        else return false;
    }
};