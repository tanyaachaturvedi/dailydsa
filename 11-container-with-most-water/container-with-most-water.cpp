class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        int m=0;
        int n= height.size()-1;
        
        while(m<n){
            int area=min(height[m],height[n]) * (n-m);
            maxi= max(area,maxi);

            if(height[m]<height[n]){
                m++;
            }
            else {
                n--;
            }
        }
        return maxi;
    }
};