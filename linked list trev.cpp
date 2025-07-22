#include <bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data; Node*next;
    Node(int new_data){
        this->data=new_data;
        this->next=nullptr;
    }

};
void trevlist(Node*head){
    while (head!=nullptr)
    {
        cout << head-> data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    trevlist(head);


}
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Forward traversal
void forwardTraversal(Node* head) {
    cout << "Forward: ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Backward traversal using recursion
void backwardTraversal(Node* head) {
    if (head == nullptr) return;
    backwardTraversal(head->next);
    cout << head->data << " ";
}

int main() {
    // Creating linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    forwardTraversal(head);       // Output: 10 20 30 40
    cout << "Backward: ";
    backwardTraversal(head);     // Output: 40 30 20 10
    cout << endl;

    return 0;
}
