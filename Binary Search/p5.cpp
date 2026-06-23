// Search in rotated sorted array

#include "vector"
#include <iostream>

using namespace std;

int search(vector<int> &nums, int n, int k) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == k) {
      return mid;
    } else if (nums[low] <= nums[mid]) {
      if (k >= nums[low] && k < nums[mid]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else {
      if (k > nums[mid] && k <= nums[high]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
  }
  return -1;
}

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
  int ans = search(nums, n, k);
  cout << ans;
  return 0;
}
