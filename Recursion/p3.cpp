// display array using recursion
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &arr, int index) {
  if (index == arr.size()) {
    return;
  }
  cout << arr[index] << " ";
  display(arr, index + 1);
}

// display array in reverse using recursion
void displayBack(vector<int> &arr, int index) {
  if (index == -1) {
    return;
  }
  cout << arr[index] << " ";
  displayBack(arr, index - 1);

  //   or
  if (index == arr.size()) {
    return;
  }
  displayBack(arr, index + 1);
  cout << arr[index];
}

int main() {
  vector<int> arr;
  cout << "Enter size of array: ";
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  display(arr, 0);
  cout << endl;
  displayBack(arr, n - 1);
  cout << endl;
  return 0;
}
