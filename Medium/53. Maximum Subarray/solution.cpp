class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN, prf = 0;
        for (auto &x : nums){
            prf += x;
            if (prf > mx) mx = prf;
            if (prf < 0) prf = 0;
        }
        return mx;
    }
};