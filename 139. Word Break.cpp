class Solution {
public:
    bool wordBreak(string s, vector<string>& dict) {
        unordered_map<int,bool> dp;
        return f(0,s,dict,dp);
    }

    bool f(int i, string s, vector<string> &dict,unordered_map<int,bool> &dp) {
        if(i == s.size()) return true;
        if(i > s.size()) return false;

        if(dp.count(i)) return dp[i];

        bool ans = false;
        for(string &word:dict) {
            if(i+word.size() > s.size()) continue; 

            string sub = s.substr(i,word.size());
            if(sub == word) ans = ans || f(i+word.size(),s,dict,dp);
        }
        return dp[i] = ans;
    }
};
