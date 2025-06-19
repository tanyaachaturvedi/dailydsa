class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> counts(n, 0);
        vector<pair<int, int>> numWithIndex;

        // Store (value, original index)
        for (int i = 0; i < n; ++i) {
            numWithIndex.push_back({nums[i], i});
        }

        mergeSort(numWithIndex, 0, n - 1, counts);
        return counts;
    }

    void mergeSort(vector<pair<int, int>>& arr, int left, int right, vector<int>& counts) {
        if (left >= right) return;
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid, counts);
        mergeSort(arr, mid + 1, right, counts);
        merge(arr, left, mid, right, counts);
    }

    void merge(vector<pair<int, int>>& arr, int left, int mid, int right, vector<int>& counts) {
        vector<pair<int, int>> temp;
        int i = left;
        int j = mid + 1;
        int rightCounter = 0; // Number of elements moved from right to temp

        while (i <= mid && j <= right) {
            if (arr[i].first <= arr[j].first) {
                // Elements from right are not smaller, just add count and move
                counts[arr[i].second] += rightCounter;
                temp.push_back(arr[i++]);
            } else {
                // arr[j] is smaller than arr[i]
                rightCounter++;
                temp.push_back(arr[j++]);
            }
        }

        // Remaining elements in left half
        while (i <= mid) {
            counts[arr[i].second] += rightCounter;
            temp.push_back(arr[i++]);
        }

        // Remaining in right half
        while (j <= right) {
            temp.push_back(arr[j++]);
        }

        // Copy back to original array
        for (int k = left; k <= right; ++k) {
            arr[k] = temp[k - left];
        }
    }
};
