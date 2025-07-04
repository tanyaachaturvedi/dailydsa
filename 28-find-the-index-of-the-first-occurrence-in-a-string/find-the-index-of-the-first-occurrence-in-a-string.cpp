class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0; i<= haystack.size() - needle.size() ; i++){
            int j=0;
            while(j<needle.size() && haystack[i+j] == needle[j]){
                j++;
            }
            if(j == needle.size()) return i;

            if(needle.size() > haystack.size()) return -1;
        }
        return -1;
    }
};