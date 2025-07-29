class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged="";
        int n=word1.length();
        int m=word2.length();
        int i=0;
        int j=0;

        while(i<n && j<m){
            merged.push_back(word1[i]);
            i++;
            merged.push_back(word2[j]);
            j++;
        }
        if(n>m){
            merged.append(word1.substr(i));
        }
        else {
            merged.append(word2.substr(j));
        }
        return merged;
    }
};