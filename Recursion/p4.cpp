// max in a array
#include <iostream>
#include <vector>

using namespace std;

int maxArray(vector<int> &nums) {
  int n = nums.size();
  if (n == 1) {
    return nums[0];
  }
  return max(nums[n - 1], maxArray(nums));
}

int main() {
  int n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int max = maxArray(nums);
  cout << max << endl;
  return 0;
}