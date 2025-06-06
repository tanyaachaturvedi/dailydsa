class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int xr=0, cnt=0;
        map<int,int> mpp;
        mpp[xr]++;
        
        for(int i=0; i<arr.size(); i++){
            xr= xr^arr[i];
            
            int x= xr^k;
            cnt += mpp[x];
            mpp[xr]++;
        }
        return cnt;
    }
};