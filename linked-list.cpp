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

    Node(int val) : val{val}, next{nullptr} {}
  };
public:
  LinkedList(): head{nullptr}, tail{nullptr} {}
  ~LinkedList();

  //operations
  int size() const;
  bool isEmpty() const;

  //insert
  void insertFront(int val);
  void insertBack(int val);
  void insertAfter(int key, int val);

  //remove - list must be non-empty
  void removeAt(int key);

  //overload output operator for print
  friend std::ostream &operator<<(std::ostream &out, const LinkedList LL);

  //print
  void skipPrint() const;

  //advanced operations
  bool isCycle() const;
};

int LinkedList::size() const{
  int total = 0;
  if (!head){
	return 0;
  }
  else {
	Node *n = head;
	while (n){
	  total += 1;
	  n = n->next;
	}
  }
}

bool LinkedList::isEmpty() const{
  size() ? true : false;
}

void LinkedList::insertFront(int val){
  Node n = Node(val);
  if (isEmpty()){
    head = n;
    tail = n;
  } else {
    n.next = head;
    head = n;
  }
}

void LinkedList::insertBack(int val){
  Node *n = Node(val);
  if (isEmpy()){
    head = n;
    tail = n;
  } else {
    tail.next = n;
    tail = n;
  }
}

void LinkedList::insertAfter(int key, int val){
  if (isEmpty()){
	head = n;
	tail = n;
  }
  else{
	Node *n = head;
	while (n){
	  if (n->key == key){
		Node new_node = Node(val);
		new_node.next = n->next;
		n->next = new_node;
		return;
	  }
	  else {
		n = n->next;
	  }
	}
	cout << "unable to find key: " + key << endl;
  }
}

void LinkedList::removeAt(int key){
  Node *n = head;
  if (size() == 1){
	if (n->key == key){
	  head = nullptr;
	  tail = nullptr;
	}
	else {
	  cout << "No key found" << endl;
	}
  }
  else {
	while (n){
	  if (n->next->key == key){
		n->next = n->next->next;
		return;
	  }
	  else {
		n = n->next;
	  }
	}
	cout << "No key found" << endl;
  }
}

std::ostream &operator<<(std::ostream &out, const LinkedList LL){
  if (isEmpty){
	out << "The list is empty!" << endl;
  }
  else {
	Node *n = head;
	while (n){
	  out << "key: " << n->key << ", " << "value: " << n->val << endl;
	  n = n->next;
	}
  }
  return out;
}

void LinkedList::skipPrint() const {
  int count = 2;
  Node *n = head;
  while (n){
	if (count % 2 == 0){
	  cout << "key: " << n->key << ", value: " << n->val << endl;
	}
	count += 1;
	n = n->next;
  }
}

int main(){
  LinkedList LL = LinkedList();
  cout << LL;
}
