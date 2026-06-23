#include "vector"
#include <iostream>
using namespace std;

int daysNeeded(vector<int> &weights, int capacity) {
  int days = 1;
  int currentLoad = 0;
  for (int w : weights) {
    if (currentLoad + w > capacity) {
      days++;
      currentLoad = w;
    } else {
      currentLoad += w;
    }
  }
  return days;
}

int shipWithinDays(vector<int> &weights, int d) {
  int n = weights.size();
  int low = *max_element(weights.begin(), weights.end());
  int high = 0;
  for (int i = 0; i < n; i++) {
    high += weights[i];
  }
  while (low < high) {
    int mid = low + (high - low) / 2;
    int needed = daysNeeded(weights, mid);
    if (needed <= d) {
      high = mid;
    } else {
      low = mid + 1;
    }
  }
  return low;
}

int main() {
  int n;
  cin >> n;
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> weights[i];
  }
  int d;
  cin >> d;
  return 0;
}
