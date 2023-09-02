class Solution {
public:
    unordered_set<string> st;
    vector<int> mem;

    int solve(string& s, int ind){ 
        if(ind >= s.size()) return 0;
        if(mem[ind] != -1) return mem[ind];
        int res = 1 + solve(s, ind + 1);   //skip one element with vlaue 1 added to result
        for(int i = 1; ind + i <= s.size(); ++i){ //check if any of the chars can be skiped without any value returned 
            string t = s.substr(ind, i);
            if(st.find(t) != st.end()) res = min(res, solve(s, ind+i));
        }
        return mem[ind] = res;
    }

    int minExtraChar(string s, vector<string>& dictionary) {
        mem.resize(s.size() + 1, -1);
        for(auto d: dictionary ) st.insert(d);
        return solve(s, 0);
    }
};
