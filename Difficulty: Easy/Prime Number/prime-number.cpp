class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int count = 0;
        if(n<=1)return false;
        else{
        for(int i = 2; i*i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count>0)return false;
        else return true;
    }
    }
};
