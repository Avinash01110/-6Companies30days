class Solution {
public:
    const int MOD = 1e9 + 7;

    int minMoves(vector<int>& nums) {
        int n = nums.size();

        int mini = *min_element(nums.begin(), nums.end());
        int sum = accumulate(nums.begin(), nums.end(), 0);

        int moves = sum - (mini*n);

        return moves;

    }
};
