class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(), nums.end());
        int maxx = 0;
        int streak;

        for (int num : store) {
            if (store.find(num - 1) == store.end()) {
                streak = 1;
                while (store.find(num + streak) != store.end()) {
                    streak++;
                }
                maxx = max(maxx, streak);
            }
        }
        return maxx;
    }
};
