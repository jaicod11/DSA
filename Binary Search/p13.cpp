// Minimum days to make M bouquets

#include <iostream>
#include <vector>

using namespace std;

// optimal
bool possible(vector<int> &bloom, int day, int m, int k) {
  int n = bloom.size();
  int cnt = 0;
  int tot = 0;
  for (int i = 0; i < n; i++) {
    if (bloom[i] <= day) {
      cnt++;
    } else {
      tot += (cnt / k);
      cnt = 0;
    }
  }
  tot += (cnt / k);
  return tot >= m;
}

int minDays(vector<int> &bloomDay, int m, int k) {
  long long val = m * 1LL * k * 1LL;
  int n = bloomDay.size();
  if (n < val)
    return -1;
  int low = *min_element(bloomDay.begin(), bloomDay.end());
  int high = *max_element(bloomDay.begin(), bloomDay.end());
  int result = high;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (possible(bloomDay, mid, m, k)) {
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return low;
}

int main() {
  int n;
  cin >> n;
  vector<int> bloomDay(n);
  for (int i = 0; i < n; i++) {
    cin >> bloomDay[i];
  }
  int m, k;
  cin >> m >> k;
  int ans = minDays(bloomDay, m, k);
  cout << ans;
  return 0;
}
