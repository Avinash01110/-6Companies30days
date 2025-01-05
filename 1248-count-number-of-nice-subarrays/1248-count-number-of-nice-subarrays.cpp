class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int cnt = k;
                for (int x = i; x <= j; x++) {

                    if (nums[x] % 2 != 0) {
                        cnt--;
                    }
                }
                if (!cnt) {
                    ans++;
                }
            }
        }

        return ans;
    }
};