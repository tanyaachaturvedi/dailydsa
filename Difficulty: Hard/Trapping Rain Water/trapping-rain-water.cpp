//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        stack<int> st;  
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
    
        while (!st.empty() && arr[st.top()] < arr[i]) {          
            
            int pop_height = arr[st.top()];
            st.pop();
          
            if (st.empty())
                break;

            int distance = i - st.top() - 1;
          
            int water = min(arr[st.top()], arr[i]) - pop_height;

            res += distance * water;
        }
        st.push(i);
    }
    return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends