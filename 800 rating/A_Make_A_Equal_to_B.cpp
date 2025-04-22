#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int sumA = 0, sumB = 0, mismatchCount = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                mismatchCount++;
            }
            sumA += a[i];
            sumB += b[i];
        }

        int result = min(mismatchCount, abs(sumA - sumB) + 1);
        cout << result << endl;
    }

    return 0;
}
