class Solution {
public:
    bool isSubsequence(string s, string t) {
     int k=-1,c=0;
       for(int i=0; i<s.size(); i++)
       {
           for(int j=i; j<t.size(); j++)
           {
                if(t[j]==s[i])
                 {
                     if(k<j)
                     {
                       k=j;
                       c++;
                       break;
                     }
                 }
             }
        }
       
        if(c==s.size()) return 1;
        return 0;
    }
};
