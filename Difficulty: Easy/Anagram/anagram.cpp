class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
          unordered_map<char, int> map;
        if(s1.size()!= s2.size()) return false ; 
        for( int num: s1){
            map[num]++;
        }
        for( int num: s2){
            map[num]--;
        }
        for(int num: s2){
            if(map[num]<0){
                return false; 
            }
        }
        return true ; 
    }
    
};