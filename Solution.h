#include <vector>

class Solution {
public:
    bool reverse(int x) {
        int x_ = x;
        if (x_<0)
            return false;
        unsigned int n = 0;
        while (x_ != 0) {
            int rev = x_ % 10;

            n = n * 10 + rev;
            x_ /= 10;
        }
        if (n == x)
        {
            return true;
        }
        else {
            return false;
        }
    }

    int dim(const int x)
    {
        int x_ = x;
        int cnt = 0;
        while ((x_ / 10))
        {
            cnt++;
            x_ /= 10;
        }
        cnt++;
        return cnt;
    }
};