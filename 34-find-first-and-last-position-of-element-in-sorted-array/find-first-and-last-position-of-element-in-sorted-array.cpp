class Solution {
public:
    vector<int> ans;
    int last(vector<int>& arr, int target){
        int n =arr.size();
        int l=0;
        int h=n-1;
        int ans=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(arr[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }

        }

        return ans;
    };
    int first(vector<int>& arr, int target){
        int n =arr.size();
        int l=0;
        int h=n-1;
        int ans=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]==target){
                ans=mid;
                h=mid-1;
            }
            else if(arr[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }

        }
        return ans;
    };
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=first(nums,target);
        int l=last(nums,target);
        ans.push_back(f);

        ans.push_back(l);
        return ans;


        
    }
};