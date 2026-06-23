// First occurence & last occurence in a array

#include <iostream>
#include <vector>

using namespace std;

int first(vector<int> &nums, int n, int k) {
  int low = 0, high = n - 1;
  int ans = -1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == k) {
      ans = mid;
      high = mid - 1;
    } else if (nums[mid] > k) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

int last(vector<int> &nums, int n, int k) {
  int low = 0, high = n - 1;
  int ans = -1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == k) {
      ans = mid;
      low = mid + 1;
    } else if (nums[mid] > k) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return high;
}

int main() {
  pair<int, int> p;
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
  int start = first(nums, n, k);
  int end = last(nums, n, k);
  p = {start, end};
  cout << p.first << " " << p.second;
  return 0;
}