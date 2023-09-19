class Solution {
public:
    int titleToNumber(string col) {
      
      int ans=0;
      for(auto c : col )
       {
          int d = c - 'A' + 1;
          ans = ans*26+d;
       }
          
          return ans;
    }
};
