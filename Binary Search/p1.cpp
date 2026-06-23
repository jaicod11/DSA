#include "vector"
#include <iostream>

using namespace std;

int search(vector<int> &nums, int k) {
  int n = nums.size();
  int low = 0;
  int high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == k) {
      return mid;
    } else if (nums[mid] > k) {
      high = mid - 1;
    } else {
      low = mid + 1;
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
  cout << search(nums, k);
  return 0;
}