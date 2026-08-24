class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> anagrams_hash; 
        vector<vector<string>> grouped_anagrams;
        vector<string> strs_copy = strs;

        for(int i{0}; i < strs.size(); i++){

            sort(strs_copy[i].begin(), strs_copy[i].end());
            
            if(!anagrams_hash.contains(strs_copy[i])){
                int group_numb = grouped_anagrams.size();
                grouped_anagrams.push_back({});
                anagrams_hash[strs_copy[i]] = group_numb;
                grouped_anagrams[group_numb].push_back(strs[i]);

            }
            else{
                grouped_anagrams[anagrams_hash[strs_copy[i]]].push_back(strs[i]);
            }
            

        }
        return grouped_anagrams;
    }
};
