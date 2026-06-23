// Tower of hanoi

#include <iostream>
using namespace std;

void toh(int n, int source, int auxiliary, int destination) {
  if (n == 0) {
    return;
  }
  toh(n - 1, source, destination, auxiliary);
  cout << "Move disk " << n << " from " << source << " to " << destination
       << endl;
  toh(n - 1, destination, auxiliary, source);
}

int main() {
  int n, source, auxiliary, destination;
  cin >> n >> source >> auxiliary >> destination;
  toh(n, source, auxiliary, destination);
  return 0;
}
