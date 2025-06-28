class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> freq;
        int cnt=0;

        for(auto it: stones){
            freq[it]++;
        }

        for(auto it: jewels){
            cnt += freq[it];
        }
        return cnt;
    }
};