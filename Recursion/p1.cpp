#include <iostream>
using namespace std;

int po(int x, int n) {
  if (n == 1)
    return x;
  if (n % 2 != 0) {
    return x * po(x, n - 1);
  } else {
    return po(x * x, n / 2);
  }
}

int main() {
  int x, n;
  cin >> x >> n;
  cout << po(x, n) << endl;
}