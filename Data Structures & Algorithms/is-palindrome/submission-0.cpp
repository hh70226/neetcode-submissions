class Solution {
public:
    bool isPalindrome(string s) {
        string t{};
        for(char ch : s){
            if(isalnum(static_cast<unsigned char>(ch))) t.push_back(tolower(static_cast<unsigned char>(ch)));
        }

        for(int j{0}; j < t.size(); j++){
            if(t[j] == t[t.size() - 1 - j] ) continue;
            else return false;
        }
        return true;
    }
};
