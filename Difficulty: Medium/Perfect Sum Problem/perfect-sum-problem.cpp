class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        // code here
        //knapsnack problem type
        int n = arr.size();
        vector<vector<int>>dp( n + 1 , vector<int>(target + 1 , 0));
        for(int i = 0 ; i<=n;i++){
            dp[i][0] = 1;
            
        }
        for(int i = 1;i<=n;i++){
            for(int j = 0;j<=target;j++){
                if(arr[i - 1]>j){
                    dp[i][j] = dp[i - 1][j ];
                }else{
                    dp[i][j] =dp[i-1][j]+dp[i-1][j - arr[i -1 ]];
                }
            }
        }
        return dp[n][target];
    }
};