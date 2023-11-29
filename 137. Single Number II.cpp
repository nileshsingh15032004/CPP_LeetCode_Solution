class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0;   // Bitwise counter for the first occurrence of each bit
        int twos = 0;   // Bitwise counter for the second occurrence of each bit

        for (int num : nums) {
            ones = (ones ^ num) & ~twos;
            twos = (twos ^ num) & ~ones;
        }

        return ones;
    }
};
