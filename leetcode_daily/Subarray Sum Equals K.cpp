//Question Link :https://leetcode.com/problems/subarray-sum-equals-k/
//article Link: https://leetcode.com/problems/subarray-sum-equals-k/discuss/1759909/C%2B%2Bor-Full-explained-every-step-w-Dry-run-or-O(n2)-greater-O(n)-or-Two-approaches
//prefix-sum approach

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     int n=nums.size();
        int ans=0;
        int prefix[n];
         prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(prefix[i]==k)
            ans++;
        if(mp.find(prefix[i]-k)!=mp.end()){
            ans+=mp[prefix[i]-k];
        }
        mp[prefix[i]]++;
    }
        return ans;
    }
};
