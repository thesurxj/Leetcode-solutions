
class Solution {
public:
    int numDupDigitsAtMostN(int n) {
        string s = to_string(n);
        int m = s.size();
        int unique = 0;

        // Count unique-digit numbers with fewer digits
        for (int len = 1; len < m; len++) {
            int ways = 9;
            int available = 9;

            for (int i = 1; i < len; i++) {
                ways *= available;
                available--;
            }

            unique += ways;
        }

        int mask = 0;

        // Count unique-digit numbers with the same length
        for (int i = 0; i < m; i++) {
            int digit = s[i] - '0';
            int start = (i == 0) ? 1 : 0;

            for (int d = start; d < digit; d++) {
                if (mask & (1 << d)) {
                    continue;
                }

                int ways = 1;
                int used = __builtin_popcount(
                    (unsigned)mask
                ) + 1;

                for (int j = i + 1; j < m; j++) {
                    ways *= (10 - used);
                    used++;
                }

                unique += ways;
            }

            // Repeated digit in n's prefix
            if (mask & (1 << digit)) {
                return n - unique;
            }

            mask |= (1 << digit);
        }

        // n itself has all distinct digits
        unique++;

        return n - unique;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna