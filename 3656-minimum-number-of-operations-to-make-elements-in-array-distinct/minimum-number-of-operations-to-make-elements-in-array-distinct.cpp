class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        int duplicates = 0;
        for (auto& pair : freq) {
            if (pair.second > 1) {
                duplicates += pair.second - 1;
            }
        }
        int operations = 0;
        while (duplicates > 0) {
            if (nums.size() >= 3) {
                nums.erase(nums.begin(), nums.begin() + 3); 
            } else {
                nums.clear(); 
            }
            freq.clear();
            for (int num : nums) {
                freq[num]++;
            }

            duplicates = 0;
            for (auto& pair : freq) {
                if (pair.second > 1) {
                    duplicates += pair.second - 1;
                }
            }

            operations++;
        }
        return operations;
    }
};