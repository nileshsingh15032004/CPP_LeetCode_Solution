#include <vector>
#include <bitset>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortByBits(std::vector<int>& arr) {
        std::unordered_map<int, std::vector<int>> D;

        for (int i : arr) {
            D[std::bitset<32>(i).count()].push_back(i);
        }

        std::vector<int> result;
        for (int k = 0; k <= 31; ++k) {
            if (D.find(k) != D.end()) {
                std::sort(D[k].begin(), D[k].end());
                result.insert(result.end(), D[k].begin(), D[k].end());
            }
        }

        return result;
    }
};
