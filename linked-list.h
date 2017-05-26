#include <iostream>
#include <stdbool>

class LinkedList {
private:
  Node *head;
  Node *tail;
  class Node {
  public:
	int val;
	Node *next;

	Node(int val) : val{ val }, next{ nullptr } {}
  };
public:
  LinkedList() : head{ nullptr }, tail{ nullptr } {}
  ~LinkedList();

  //operations
  int size() const;
  bool isEmpty() const;

  //insert
  void insertFront(const int val);
  void insertBack(const int val);
  void insertAfter(const int key, const int val);

  //remove - list must be non-empty
  void removeAt(int key);

  //overload output operator for print
  friend std::ostream &operator<<(std::ostream &out, const LinkedList LL);

  //print
  void skipPrint() const;
  void printBackwards() const;

  //advanced operations
  bool isCycle() const;
  void reverse();
  void convertArray(const int arr[]);
};