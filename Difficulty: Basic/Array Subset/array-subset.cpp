class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int, int> hashset ; 
        for( int num:a){
            hashset[num]++;
        }
        for( int num: b){
            hashset[num]--;
        }
        for ( int num: b){
            if(hashset[num]<0){
                return false; 
            }
        }
        return true ; 
    }
};