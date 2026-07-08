// Aggressive Cows
// https://www.geeksforgeeks.org/problems/aggressive-cows/0

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool canPlaceCows(vector<int> &stalls, int n, int c, int dist) {
  int cowsPlaced = 1;
  int lastPos = stalls[0];
  for (int i = 1; i < n; i++) {
    if (stalls[i] - lastPos >= dist) {
      cowsPlaced++;
      lastPos = stalls[i];
    }
    if (cowsPlaced == c) {
      return true;
    }
  }
  return false;
}

int solve(vector<int> &stalls, int k) {
  int n = stalls.size();
  sort(stalls.begin(), stalls.end());
  int low = 1;
  int high = stalls[n - 1] - stalls[0];
  int ans = 0;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (canPlaceCows(stalls, n, k, mid)) {
      ans = mid;
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> stalls(n);
  for (int i = 0; i < n; i++) {
    cin >> stalls[i];
  }
  cout << solve(stalls, k) << endl;
  return 0;
}
