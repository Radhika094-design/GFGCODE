// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int recursion(vector<int>&arr,int i , int &sum){
        if(i==arr.size()){
            return   sum;
            
        }
        sum+= arr[i];
        recursion(arr,i+ 1,sum);
    }
    int arraySum(vector<int>& arr) {
      
        int sum = 0;
        recursion(arr,0,sum);
        return sum;
    }
   
};