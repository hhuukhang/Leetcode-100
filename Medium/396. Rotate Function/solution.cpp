/*
for example: nums = {a,b,c,d}
F(0) = b + 2c + 3d
F(1) = a + 2b + 3c
F(2) = 2a + 3b + d
F(3) = 3a + 1c + 2d
Set: P = a + b + c + d;
F(1) - F(0) = P - 4d
F(2) = F(1) = P - 4c
...
Set f = F(0) // easy to calculate F(0)
use loop to find F(1) -> F(n-1), find max of those
*/

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int P = 0, n = nums.size();
        // base n = 1,2
        if (n == 1) return 0;
        if (n == 2) return max(nums[0], nums[1]);
        // n > 2
        for (auto &x : nums) P += x;
        int f = 0;
        for (int i = 1; i < n; i++) f += i * nums[i];
        // f = F(0)
        int ans = f;
        int k = n - 1;
        for (int i = 1; i < n; i++){
            int res = P - n * nums[k] + f;
            ans = max(ans, res);
            f = res;
            k--; 
        }
        return ans;
    }
};