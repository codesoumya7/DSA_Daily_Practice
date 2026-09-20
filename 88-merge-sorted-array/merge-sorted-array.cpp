class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=m;
        for(int i=0;i<n;i++){
            nums1[n1]=nums2[i];
           
            n1++;
        }
        sort(nums1.begin(),nums1.end());
        
    }
};