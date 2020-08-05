// Learning about linked list in c++
// Author Hendry Khoza
//
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Node list node structure
struct node {
  int data;
  node *next;
};

class Linked_List {
  private: 
    node *head, *tail;

  public: 
    Linked_List() {
      head = NULL;
      tail = NULL;

    }
    
    void add_node(int n) {
      node *temp = new node;
      temp->data = n;
      temp->next = NULL;

      if (head = NULL) {
        head = temp;
        tail = temp;
        cout << "testing 123 /n";
      } else {
        tail->next = temp;
        tail = tail->next;
        cout << "testing 321 /n";
      }
    }
    
    
    /*

    void display() {
      node *tmp;
      tmp = head;
      while (tmp != NULL) {
        cout << tmp->data << endl;
        tmp = tmp->next;
      }
    }

    */
};

int main(int argc, char *argv[]) {
  Linked_List a;
  
// add valuese to the linked list a
    a.add_node(1);
//  a.add_node(2);
//  a.display();

  return 0;
}
