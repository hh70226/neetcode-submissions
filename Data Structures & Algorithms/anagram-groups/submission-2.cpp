class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int,26>, int> anagrams_hash; 
        vector<vector<string>> grouped_anagrams;
        
        for(int i{0}; i < strs.size(); i++){
            
            array<int,26> count{}; 
            
            for(char c : strs[i]) count[c - 'a']++ ;

            if(!anagrams_hash.contains(count)){
                int group_numb = grouped_anagrams.size();
                grouped_anagrams.push_back({});
                anagrams_hash[count] = group_numb;
                grouped_anagrams[group_numb].push_back(strs[i]);

            }
            else{
                grouped_anagrams[anagrams_hash[count]].push_back(strs[i]);
            }
            

        }
        return grouped_anagrams;
    }
};
