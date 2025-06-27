class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string ans = "";
        while(n>0){
            
            int rem = n%2;
            ans+= to_string(rem);
            n = n/2;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};