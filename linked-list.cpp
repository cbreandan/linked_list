#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "linked-list.h"

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

void LinkedList::insertFront(const int val){
  Node n = Node(val);
  if (isEmpty()){
    head = n;
    tail = n;
  } else {
    n.next = head;
    head = n;
  }
}

void LinkedList::insertBack(const int val){
  Node *n = Node(val);
  if (isEmpy()){
    head = n;
    tail = n;
  } else {
    tail.next = n;
    tail = n;
  }
}

void LinkedList::insertAfter(const int key, const int val){
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

void LinkedList::removeAt(const int key){
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

void LinkedList::convertArray(const int arr[]){

}

#endif