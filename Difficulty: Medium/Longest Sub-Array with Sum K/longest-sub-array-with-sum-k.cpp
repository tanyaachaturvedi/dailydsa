//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
    int res = 0;
    int prefixSum = 0;

    for (int i = 0; i < arr.size(); ++i) {
        prefixSum += arr[i];

        // If prefix sum is same as k, we have
        // a prefix subarray (from 0 to i) having
        // sum equals to k
        if (prefixSum == k) {
            res = i + 1;
        }

        // Note that if we have the whole prefix having
        // sum k, that would be the largest subarray. 
        // Else we check if prefixSum - k exists in the
        // map if it does, then there is a subarray from
        // index of previous prefix plus 1 to i.
        else if (mp.find(prefixSum - k) != mp.end()) {
            res = max(res, i - mp[prefixSum - k]);
        }

        // We enter in map only if this is first
        // occurrence of prefDixSum (Note that we 
        // to have the smallest index to find the longest
        // subarray.
        if (mp.find(prefixSum) == mp.end()) {
            mp[prefixSum] = i;
        }
    }

    return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends