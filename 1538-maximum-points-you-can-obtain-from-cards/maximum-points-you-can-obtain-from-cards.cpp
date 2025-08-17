class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int lsum=0;
        int rsum=0;
        int score=0;

        for(int i=0;i<k;i++){
            lsum=lsum + cardPoints[i];
            score=lsum;
        }
        int r=n-1;
        for(int i=k-1; i>=0;i--){
            lsum = lsum-cardPoints[i];
            rsum=rsum + cardPoints[r];
            r=r-1;
            score=max(score,lsum+rsum);
        }
        return score;
    }
};