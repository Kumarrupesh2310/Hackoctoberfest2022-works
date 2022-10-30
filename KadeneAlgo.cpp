    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int ans=arr[0];
        int cur=arr[0];
        for(int i=1;i<n;i++){
            cur=max(cur+arr[i],arr[i]);
            ans=max(ans,cur);
        }
        return ans;
        // Your code here
        
    }
};
