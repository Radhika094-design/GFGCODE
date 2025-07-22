class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        
       int n = arr.size();
        
        unordered_map<int, int> map ;
        
        map[0] = 1;
        int k = 0; 
        int sum = 0 ;
        int count = 0 ;
        for( int i = 0 ; i<n ; i++){
         sum += arr[i];
         if(map .count(sum - k )){
            count += map[sum - k ];
         }
         map[sum]++;
        }
       return count ;  
    }
};