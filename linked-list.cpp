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
  bool isEmpty();

  //insert
  void insertFront(int val);
  void insertBack(int val);
  void insertBefore(int key, int val);
  void insertAfter(int key, int val);

  //remove
  void removeAt(int val);

  //print
  void print();

  //advanced operations
  bool isCycle();
};

bool LinkedList::isEmpty(){
  !head ? true : false; 
}

void LinkedList::insertFront(int val){
  Node n = Node(val);
  if (isEmpty){
    head = n;
    tail = n;
  } else {
    n.next = head;
    head = n;
  }
}

void LinkedList::insertBack(int val){
  Node *n = Node(val);
  if (isEmpy){
    head = n;
    tail = n;
  } else {
    tail.next = n;
    tail = n;
  }
}

void LinkedList::insertBefore(int key, int val){
	
}

void LinkedList::insertAfter(int key, int val){
	Node *n = head;
	while (n){
		if (n->key == key){
			Node new_node = Node(val);
			new_node.next = n->next;
			n->next = new_node;
		}
		else {
			n = n->next;
		}
	}
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
