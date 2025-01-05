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

    int slidingWindow(vector<int> &nums, int k){
        int n = nums.size();

        int prevCnt = 0;
        int oddCnt = 0;

        int ans = 0;
        
        int i = 0;
        int j = 0;

        while(j < n){
            if(nums[j] % 2 != 0){
                oddCnt++;
                prevCnt = 0;
            }

            while(i < n && oddCnt >= k){
                prevCnt++;
                if(nums[i] % 2 != 0){
                    oddCnt--;
                }
                i++;
            } 

            ans += prevCnt;
            j++;
        }

        return ans;

    }


    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        // int ans = prefixSum(nums, k);
        int ans = slidingWindow(nums, k);

        return ans;
    }
};