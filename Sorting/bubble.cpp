// Bubble sorting -- it pushes the maximum element to the last by comparing
// with every element in the array step by step. worst and average TC will be
// O(n^2) and best TC will be O(n) if all the elements are in sorted order.
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    for (int j = 0; j <= n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bubble_sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}