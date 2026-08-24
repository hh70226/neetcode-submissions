class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> anagrams_hash; 
        vector<vector<string>> grouped_anagrams;
        
        for(int i{0}; i < strs.size(); i++){
            
            char count[26] = {};
            
            for(char c : strs[i]) count[c - 'a']++ ;
            string key(count, 26);

            if(!anagrams_hash.contains(key)){
                int group_numb = grouped_anagrams.size();
                grouped_anagrams.push_back({});
                anagrams_hash[key] = group_numb;
                grouped_anagrams[group_numb].push_back(strs[i]);

            }
            else{
                grouped_anagrams[anagrams_hash[key]].push_back(strs[i]);
            }
            

        }
        return grouped_anagrams;
    }
};
