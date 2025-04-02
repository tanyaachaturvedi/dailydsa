//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int low=0, high=n;
        
        while(low<=high){
            int mid=(low+high)/2;
            long long val = mid * mid;
            
            if(val<=(long long)(n)){
                low=mid+1;
            }
            
            else {
                high=mid-1;
            }
        }
        return high;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends