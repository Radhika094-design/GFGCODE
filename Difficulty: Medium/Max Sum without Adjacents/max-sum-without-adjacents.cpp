// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr) {
        // code here
       int n = arr.size();
       vector<int>dp(n+ 1, 0);
       dp[0] = 0;
       dp[1] = arr[0];
       for(int i = 2;i<=n;i++){
            dp[i] = max(arr[i - 1] + dp[i - 2], dp[i - 1]);
       }
       return dp[n];
    }
};