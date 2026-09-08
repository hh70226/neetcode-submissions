class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(int i = 0; i < strs.size(); i++){
            encoded = encoded + to_string(strs[i].size()) + "#" + strs[i];
        }
        return encoded; 
    }

    vector<string> decode(string s) {
        vector<string> decoded; 
        int i = 0;
        while(i < s.size()){
            int hash_pos = s.find('#', i);
            string count_string = s.substr(i, hash_pos - i);
            int count = stoi(count_string);
            string word = s.substr(hash_pos + 1, count);
            decoded.push_back(word);
            i = count + hash_pos + 1;
        }
        return decoded;
    }
};
