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
  int size();
  bool isEmpty();

  //insert
  void insertFront(int val);
  void insertBack(int val);
  void insertAfter(int key, int val);

  //remove - list must be non-empty
  void removeAt(int key);
  void removeAfter(int key);

  //print
  void print();

  //advanced operations
  bool isCycle();
};

int LinkedList::size(){
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

bool LinkedList::isEmpty(){
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
}

void LinkedList::removeAfter(int key){

}

void LinkedList::print(){
  if (isEmpty){
	cout << "The list is empty!" << endl;
  }
  else {
	Node n = head;
	while (n){
	  cout << "key: " << n->key << ", " << "value: " << n->val << endl;
	  n = n->next;
	}
  }
}

int main(){
  LinkedList LL = LinkedList();
}
