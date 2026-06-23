// Lower Bound -- the index of the first element in the sorted array that is
// greater than or equal to x Upper Bound -- the index of the first element in
// the sorted array that is greater than x

#include "vector"
#include <iostream>

using namespace std;

// lower bound in build method -- lower_bound(arr.begin(), arr.end(), x) ||
// lower_bound(arr+2, arr+6, x);
// upper bound in build method -- upper_bound(arr.begin(), arr.end(), x) ||
// upper_bound(arr+2, arr+6, x);

int lowerBound(vector<int> &nums, int k) {
  int n = nums.size();
  int low = 0;
  int high = n - 1;
  int ans = n;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] >= k) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

int upperBound(vector<int> &nums, int k) {
  int n = nums.size();
  int low = 0;
  int high = n - 1;
  int ans = n;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] > k) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    nums.push_back(x);
  }
  int k;
  cin >> k;
  cout << lowerBound(nums, k);
  return 0;
}