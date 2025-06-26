class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> res;
        for(int i=0; i<words.size(); i++){
            for(int j=0; words[i][j] != '\0'; j++){
                if(words[i][j] == x){
                    res.push_back(i);
                    break;
                }
            }
        }
        return res;
    }
};