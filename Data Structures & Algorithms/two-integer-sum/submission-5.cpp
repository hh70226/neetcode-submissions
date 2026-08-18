class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff = 0;
        vector<int> v(2);
        unordered_map<int, int> diff_index;
        for(int i{0}; i < nums.size(); i++){
            if (diff_index.contains(nums[i])) {
                return {diff_index[nums[i]], i}; 
            }
            
            diff = target - nums[i];
            diff_index[diff] = i; 
            
        }
        return v;
        
    }
};
