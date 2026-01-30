class Solution {
public:
    bool judgeSquareSum(int c) {
        int v = sqrt(c);
        for (int i = 0; i <= v; i++){
            int u = c - i * i;
            int k = sqrt(u);
            if (k * k == u) return true;
        }
        return false;
    }
};