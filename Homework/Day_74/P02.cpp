class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) {
            return 1;
        }
        if (n < 4) {
            return 0;
        }
        return n % 4 == 0 && isPowerOfFour(n / 4);
    }
};
