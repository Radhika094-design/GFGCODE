// User function Template for C++

class Solution {
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n = val.size();
        vector<vector<int>>dp(n+1,vector<int>(capacity + 1 , 0));
        for(int i = 1 ; i<=n ;i++){
            for(int j = 1 ;j<=capacity; j++){
                if(wt[i - 1]>j){
                    dp[i][j] = dp[i - 1 ][j];
                }else{
                    dp[i][j] = max(dp[i-1][j], val[i-1] + dp[i][j - wt[i-1]]);

                }
            }
        }
        return dp[n][capacity];
    }
};