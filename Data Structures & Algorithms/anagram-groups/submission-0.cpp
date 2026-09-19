class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(string s:strs){
            vector<int>freq(26,0);
            for(char ch:s){
                freq[ch-'a']++;
            }
            string key="";
            for(int count:freq){
                key+=to_string(count)+'#';

            }
            mp[key].push_back(s);


        }
        for(auto & [key,group]:mp){
            ans.push_back(group);
        }

       return ans;
    }
};
