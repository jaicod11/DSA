#include <iostream>
#include <vector>
using namespace std;

// fibonacci number
// memoization
int f(int n, vector<int> &dp) {
  if (n <= 1) {
    return n;
  }
  if (dp[n] != -1)
    return dp[n];
  return dp[n] = f(n - 1, dp) + f(n - 2, dp);
}

// tabulation
int fib(int n) {
  int prev2 = 0;
  int prev = 1;
  for (int i = 2; i <= n; i++) {
    int curr = prev + prev2;
    prev2 = prev;
    prev = curr;
  }
  return prev;
}

int main() {
  int n;
  cin >> n;
  vector<int> dp(n + 1, -1);
  cout << f(n, dp);
  cout << fib(n);
}