class Solution {
public:
    string mergeAlternately(string w1, string w2) {
   
      string s;
      int i=0;

      for(; i<w1.size() || i<w2.size(); i++) 
      {
          if(i<w1.size())
             s.push_back(w1[i]);
           
          if(i<w2.size())
             s.push_back(w2[i]);
           
      }
          
      return s;
    }
};
