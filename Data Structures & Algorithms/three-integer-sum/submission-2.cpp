class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> somes{};
        sort(nums.begin(), nums.end());

   

        for(int i{0}; i < nums.size(); i ++){
            int n = nums.size() - 1, b = i + 1;  
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            for(int j{0}; j < nums.size(); j++){
                if(b < n){
                    int sums = nums[i] + nums[b] + nums[n];
                    if(sums == 0) {
                        somes.push_back({nums[i], nums[b], nums[n]});
                        n--;
                        b++;
                        while(b < n && nums[b] == nums[b - 1]) b++;
                        while(b < n && nums[n] == nums[n + 1]) n--;
                    }
                    else if(-nums[i] < nums[b] + nums[n]) n--;
                
                    else if(-nums[i] > nums[b] + nums[n]) b++;
                    }
            }

        }
        
        return somes;
    }
};
