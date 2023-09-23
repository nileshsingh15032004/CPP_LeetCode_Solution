class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        int n = s.size();
        string ans(n, '.');
        for (int i = 0; i < n; i++) {
            ans[ind[i]] = s[i];
        } 
        return ans;
    }
};
