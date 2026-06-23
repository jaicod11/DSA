#include <iostream>
#include <vector>

using namespace std;

int firstOccur(vector<int> nums, int ele) {
  int n = nums.size();
  if (n == 0) {
    return -1;
  }
  if (nums[0] == ele) {
    return 0;
  }
  int first = firstOccur(nums, ele);
  if (first == -1) {
    return -1;
  }
  return first + 1;
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int ele;
  cin >> ele;
  int first = firstOccur(nums, ele);
  return 0;
}