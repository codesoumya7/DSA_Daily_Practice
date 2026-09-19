class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=-1;
        int second_largest=-1;;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                
                second_largest=largest;
                largest=arr[i];
            }
            else if(arr[i]>second_largest && arr[i]!=largest){
                second_largest=arr[i];
            }
        }
        return second_largest;
    }
};