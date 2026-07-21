#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
  int data;
  Node *next;

public:
  Node(int data1) {
    data = data1;
    next = nullptr;
  }
};

Node *arr2ll(vector<int> &nums) {
  Node *head = new Node(nums[0]);
  cout << head;       // gives the location of the value
  cout << head->data; // gives the value
  Node *mover = head;
  for (int i = 1; i < nums.size(); i++) {
    Node *temp = new Node(nums[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

void traversal(Node *head) {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main() {
  vector<int> nums = {2, 3, 4, 5};
  Node *head = arr2ll(nums);
  traversal(head);
}