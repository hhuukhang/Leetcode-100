class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.length();
        int ans = num;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                string t = s;
                swap(t[i], t[j]);
                ans = max(ans, stoi(t));
            }
        }
        return ans;
    }
};