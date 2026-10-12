class Solution {
public:
    vector <int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int c=0;
            c=target-nums[i];
            if(mpp.find(c)!=mpp.end()){
                arr.push_back(mpp[c]);
                arr.push_back(i);
            }
            mpp[nums[i]]=i;
        }
        return arr;
        
    }
};