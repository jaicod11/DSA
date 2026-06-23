// Floor -- largest element in the array that is smaller than or equal to x
// Ceil -- smallest element in the array that is greater than or equal to x

#include <iostream>
#include <vector>

using namespace std;

int floor(vector<int> &nums, int x) {
  int n = nums.size();
  int low = 0;
  int high = n - 1;
  int ans = -1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] <= x) {
      ans = nums[mid];
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}

int ceil(vector<int> &nums, int x) {
  int n = nums.size();
  int low = 0;
  int high = n - 1;
  int ans = -1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] >= x) {
      ans = nums[mid];
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
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
  cout << floor(nums, k) << " " << ceil(nums, k);
  return 0;
}
