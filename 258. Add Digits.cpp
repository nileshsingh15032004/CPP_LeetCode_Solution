class Solution {
public:
    int addDigits(int num) {
        int k = 0;
        while (num > 0) {
            k = k + (num % 10);
            num = num / 10;
        }

        if (k >= 10) {
            return addDigits(k); 
        }

        return k;
    }
};
