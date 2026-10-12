
class Solution {
public:
    bool threeFibonacciSum(int n) {
        if (n % 2 != 0) {
            return false;
        }

        long long a = 0, b = 1, c = 1;

        while (c <= n) {
            if (a + b + c == n) {
                return true;
            }

            long long next = b + c;
            a = b;
            b = c;
            c = next;
        }

        return false;
    }
};
