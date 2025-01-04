class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int prev = -1;
                int flag = 1;
                for (int k = 0; k < n; k++) {
                    if (k >= i && k <= j) {
                        continue;
                    }

                    if (nums[k] <= prev) {
                        flag = 0;
                        break;
                    }
                    prev = nums[k];
                }
                if (flag) {
                    ans++;
                }
            }
        }

        return ans;
    }
};