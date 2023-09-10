
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    // Check if nums1[i] is already in nums3 to avoid duplicates
                    if (find(nums3.begin(), nums3.end(), nums1[i]) == nums3.end()) {
                        nums3.push_back(nums1[i]);
                    }
                }
            }
        }

        return nums3;
    }
};
