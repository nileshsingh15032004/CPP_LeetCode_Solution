class Solution {
public:
    vector<int> decode(vector<int>& nums, int n) {
         vector<int>ans;
         ans.push_back(n);
        for(int i=0; i<nums.size();  i++)
        {
            ans.push_back(nums[i]^ans[i]);
        }
        return ans;
    }
};
