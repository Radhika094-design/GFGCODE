class Solution {
  public:
  void function(vector<int>&arr, vector<int>&result,int index,int currsum){
     // currsum = 0;
      if(index==arr.size()){
          result.push_back(currsum);
          return;
      }
      //include.
      function(arr,result,index+1,currsum+arr[index]);
      //exclude.
      function(arr,result,index+1,currsum);
  }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> result;
        function(arr, result, 0, 0);
        return result;
    }
};