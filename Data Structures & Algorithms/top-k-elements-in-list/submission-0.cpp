class Solution {
public: // do bucket? 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        int offset = 1000;
        vector<int> numb_freq(2001, 0);
        vector<vector<int>> bucket(n + 1);
        
        
        for(int i{0}; i < nums.size(); i++){
            numb_freq[nums[i] + offset]++;
        }

        for(int j{0}; j < numb_freq.size(); j++){
            bucket[numb_freq[j]].push_back(j - offset);
        }

        vector<int> results;
        for(int z = n; z >= 0; z--){
            for(int vals : bucket[z]){
                results.push_back(vals);
                if(results.size() == k){
                    return results;
                }
            }
        }
        return results;
    }
};
