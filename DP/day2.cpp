#include <iostream>
#include <vector>
using namespace std;

// Climbing Stairs Problem

// Memoization
int solve(int n, vector<int> &dp) {
  if (n == 0)
    return 1;
  if (n == 1)
    return 1;
  if (dp[n] != -1)
    return dp[n];
  return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
}

int climbStairs(int n) {
  vector<int> dp(n + 1, -1);
  return solve(n, dp);
}

// Tabulation
int climbStairs2(int n) {
  int prev2 = 1;
  int prev = 1;
  for (int i = 2; i <= n; i++) {
    int cur_i = prev2 + prev;
    prev2 = prev;
    prev = cur_i;
  }
  return prev;
}

int main() {
  int n;
  cin >> n;
  cout << climbStairs(n);  // Memoization
  cout << climbStairs2(n); // Tabulation
  return 0;
}