class Solution {// yo apparently char is integers crazy
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        else {
            int count[26] = {};
            for(char c : s) count[c - 'a']++;
            for(char ch : t) if (--count[ch - 'a'] < 0) return false; 
            return true;
        }
    }
};
