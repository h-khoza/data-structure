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

    // Add element at the end of the list
    void append(int n) {
      node *temp = new node;
      temp->data = n;
      temp->next = NULL;

      //check if is the first item on the list
      // make the first and last poiter the same
      // otherwisde add to tail
      if (head == NULL) {
        head = temp;
        tail = temp;
        head->next = tail;
      } else {
        tail->next = temp;
        tail = temp;

      }

    }
    
    // Add element at the begging of the list
    void prepend (int n){
      node *temp = new node;
      temp->data = n;
      temp->next = head;
      head = temp;
    }
    
    // Check if the number exist in the list
   bool has(int n) {
      node *temp;
      temp = head;
      while (temp != NULL && n == temp->data) {
        return true;
        temp = temp->next;
      }
     return false;
   }

   int remove(int n) {
      node *temp;
      temp = head;

      while (temp != NULL && n == temp->data) {

          //return true;
       
        temp = temp->next;
     }

     return -1;
   }

    void display() {
      node *tmp;
      tmp = head;
      while (tmp != NULL) {
        cout << tmp->data << endl;
        tmp = tmp->next;
      }
    }

};

int main(int argc, char *argv[]) {
  Linked_List a;

  a.append(7);
  a.append(12);
  a.append(79);
  a.append(67);
  a.append(23);
  a.append(11);
  a.append(80);
  a.prepend(5);
  a.prepend(4);
  a.prepend(3);
  a.prepend(2);
  a.display();

  cout << a.has(67) << " " << a.has(100) << endl;

  return 0;
}
