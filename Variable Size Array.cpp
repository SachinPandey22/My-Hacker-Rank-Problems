#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q, m, j;
    cin >> n >> q;  // Read number of subarrays (n) and number of queries (q)

    // Create a vector of vectors to hold the variable-length subarrays
    vector<vector<int>> arr(n);

    // Reading input for each subarray
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;  // Read the size of the current subarray
        arr[i].resize(size);  // Resize the current subarray to the specified size

        // Read the elements into the subarray
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    // Processing queries
    for (int k = 0; k < q; k++) {
        cin >> m >> j;  // Read the indices for the query (m and j)
        // Output the element at the specified indices in the respective subarray
        cout << arr[m][j] << endl;
    }

    return 0;
}
