class Solution {
public:
    bool isAnagram(string s, string t) {

        int m=s.size();
        int n=t.size();
        if(m!=n){
            return false;
        }
        
        unordered_map<char,int>mp;
        for(auto ch:s){
            mp[ch]++;

        }
        for(auto ch:t){
            
                mp[ch]--;
               
               
            
           if(mp[ch]<0){
            return false;
           }
            
            
        }
return true;

      
    }
};
