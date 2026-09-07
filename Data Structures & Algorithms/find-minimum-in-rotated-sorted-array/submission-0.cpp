class Solution {
public:
    int findMin(vector<int> &nums) {
        int max = nums.size() - 1;
        int lower = 0;
        int mid;
        int k = nums[0];

        while(lower <= max){
            mid = lower + (max - lower)/2;
            k = min(k, nums[mid]);

            if(nums[mid] <= nums[max]){
                max = mid - 1;
            } 
            
            else if(nums[mid] >= nums[lower]){
                lower = mid + 1;
            }
            
        }
        return k;
    }
};
