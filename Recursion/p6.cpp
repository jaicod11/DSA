// first index & last index
#include <iostream>
#include <vector>
using namespace std;

int firstIndex(vector<int> arr, int idx, int target) {
  if (idx == arr.size()) {
    return -1;
  }
  if (arr[idx] == target) {
    return idx;
  } else {
    int fi = firstIndex(arr, idx + 1, target);
    return fi;
  }
}

int lastIndex(vector<int> arr, int idx, int target) {
  if (idx == arr.size()) {
    return -1;
  }
  int li = lastIndex(arr, idx + 1, target);
  if (li == -1) {
    if (arr[idx] == target) {
      return idx;
    } else {
      return -1;
    }
  } else {
    return li;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int target;
  cin >> target;
  cout << firstIndex(arr, 0, target) << endl;
  cout << lastIndex(arr, 0, target) << endl;
  return 0;
}