class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    int n=nums.size();
    
    vector<int>ans;
   for(int x:nums){
    mp[x]++;
   }
   vector<pair<int,int>>arr;
   for(auto p:mp){

     arr.push_back({p.second,p.first});
   }
   sort(arr.rbegin(),arr.rend());
   for(int i=0;i<k;i++){
   
        ans.push_back(arr[i].second);
    
   }
    return ans;
    }
};
