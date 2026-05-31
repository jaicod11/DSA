// DP on subsequences/subsets

// Subset sum equal to K

#include <iostream>
#include <vector>

using namespace std;

// Memoization
bool f(vector<int> &nums, int ind, int target, vector<vector<int>> &dp) {
  if (target == 0)
    return true;
  if (ind == 0)
    return (nums[0] == target);
  if (dp[ind][target] != -1)
    return dp[ind][target];

  bool notTake = f(nums, ind - 1, target, dp);
  bool take = false;
  if (nums[ind] <= target) {
    take = f(nums, ind - 1, target - nums[ind], dp);
  }
  return dp[ind][target] = (take | notTake);
}

bool subsetSum(vector<int> &nums, int n, int target) {
  vector<vector<int>> dp(n, vector<int>(target + 1, -1));
  return f(nums, n - 1, target, dp);
}

// Tabulation
bool subsetSumToK(int n, int k, vector<int> &arr) {
  vector<vector<bool>> dp(n, vector<bool>(k + 1, false));
  for (int i = 0; i < n; i++) {
    dp[i][0] = true;
  }
  if (arr[0] <= k) {
    dp[0][arr[0]] = true;
  }
  for (int ind = 1; ind < n; ind++) {
    for (int target = 1; target <= k; target++) {
      bool notTaken = dp[ind - 1][target];
      bool taken = false;
      if (arr[ind] <= target) {
        taken = dp[ind - 1][target - arr[ind]];
      }
      dp[ind][target] = notTaken || taken;
    }
  }
  return dp[n - 1][k];
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
  int target;
  cin >> target;
  cout << subsetSum(nums, n, target);
  return 0;
}
