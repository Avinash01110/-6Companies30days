class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<int> ans;
        int i = ((n / 2) - 1);
        int j = n - 1;

        while(i != 0){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i--;
            j--;
        }
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);

        nums = ans;

    }
};