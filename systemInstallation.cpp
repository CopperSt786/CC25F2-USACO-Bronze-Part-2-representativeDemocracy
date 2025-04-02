#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int NR, NC;
    cin >> NR >> NC;

    vector<vector<int>> grid(NR, vector<int>(NC));
    for (int i = 0; i < NR; i++) {
        for (int j = 0; j < NC; j++) {
            cin >> grid[i][j];
        }
    }

    int maxSum = 0;
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i <= NR - 3; i++) {
        for (int j = 0; j <= NC - 3; j++) {
            int sum = 0;
            for (int x = i; x < i + 3; x++) {
                for (int y = j; y < j + 3; y++) {
                    sum += grid[x][y];
                }
            }
            if (sum > maxSum) {
                maxSum = sum;
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << maxSum << endl;
    cout << maxRow + 1 << " " << maxCol + 1 << endl;

    return 0;
}
