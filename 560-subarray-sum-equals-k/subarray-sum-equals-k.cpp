class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        unordered_map<int,int>mp;
        int n =nums.size();
        int sum=0;
        int cn=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int rem=sum-k;
            cn+=mp[rem];
            mp[sum]+=1;
            
        }
        return cn;
    }
};
