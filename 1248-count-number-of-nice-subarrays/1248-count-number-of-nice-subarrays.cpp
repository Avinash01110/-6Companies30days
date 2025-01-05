class Solution {
public:

    int prefixSum(vector<int> &nums, int k){
        int n = nums.size();

        int oddCnt = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;

        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] % 2 != 0){
                oddCnt++;
            }

            if(mp.count(oddCnt - k)){
                ans += mp[oddCnt - k];
            }

            mp[oddCnt]++;
        }

        return ans;

    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        int ans = prefixSum(nums, k);

        return ans;
    }
};