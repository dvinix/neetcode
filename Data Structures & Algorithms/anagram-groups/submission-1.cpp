class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // unordered_map<string, vector<string>> res;

        // for(const auto& s : strs){

        //     vector<int> count(26, 0);
        //     for(char c : s){
        //         count[c - 'a']++;
        //     }

        //     string key = to_string(count[0]);
        //     for(int i=1; i < 26; i++){
        //         key += ',' + to_string(count[i]);
        //     }
        //     res[key].push_back(s);
        // }

        // vector<vector<string>> ans;
        // for(const auto&pair : res){
        //     ans.push_back(pair.second);
        // }

        // return ans;

        unordered_map<string, vector<string>> mp;

        for(const auto&x : strs){

            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }

        vector<vector<string>> ans;
        for(const auto&x : mp){
            ans.push_back(x.second);
        }

        return ans;


    }
};
