#include <iostream>
#include <vector>
using namespace std;

// Max. sum of non adjacent problem (House Robber Problem 2 -- loop houses)
// Logic -- First start from 1st house to last-1 house and second start from 2nd
// house to last house and take max of both

int f(vector<int> &nums) {
  int n = nums.size();
  int prev = nums[0], prev2 = 0;
  for (int i = 1; i < n; i++) {
    int take = nums[i];
    if (i > 1) {
      take += prev2;
    }
    int notTake = 0 + prev;
    int curr = max(take, notTake);
    prev2 = prev;
    prev = curr;
  }
  return prev;
}
int rob(vector<int> &nums) {
  int n = nums.size();
  if (n == 1)
    return nums[0];
  vector<int> temp1, temp2;
  for (int i = 0; i < n; i++) {
    if (i != 0) {
      temp1.push_back(nums[i]);
    }
    if (i != n - 1) {
      temp2.push_back(nums[i]);
    }
  }
  int ans = max(f(temp1), f(temp2));
  return ans;
}

int main() {
  int n;
  vector<int> nums;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    nums.push_back(x);
  }
  cout << rob(nums);
}