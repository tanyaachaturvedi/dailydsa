class Solution {
public:
    long findScore(vector<int>& nums) {
        long score = 0;
        vector<pair<int, int>> sorted(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            sorted[i] = make_pair(nums[i], i);
        }

        sort(sorted.begin(), sorted.end());

        vector<bool> marked(nums.size(), false);

        for (int i = 0; i < nums.size(); i++) {
            int number = sorted[i].first;
            int index = sorted[i].second;
            if (!marked[index]) {
                score
                 += number;
                marked[index] = true;
                if (index - 1 >= 0) {
                    marked[index - 1] = true;
                }
                if (index + 1 < nums.size()) {
                    marked[index + 1] = true;
                }
            }
        }

        return score;
    }
};