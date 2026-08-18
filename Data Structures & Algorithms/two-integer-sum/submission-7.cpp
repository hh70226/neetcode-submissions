class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diff_index;
        for(int i{0}; i < nums.size(); i++){
            if (diff_index.contains(nums[i])) {
                return {diff_index[nums[i]], i}; 
            }

            diff_index[target - nums[i]] = i; 
            
        }
        return {};
    }
};
