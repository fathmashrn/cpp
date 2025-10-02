//Here,we are inserting at the head each time, so it reverses the order

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head=NULL;

void insert(int new_data);
void display();

int main(){
    
    insert(4);
    insert(6);
    insert(3);
    insert(9);
    insert(5);
    
    cout << "The linked list is: ";
    display();
    return 0;
}

void insert (int new_data){
    Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next=head;
    head=new_node;
}

void display(){
    Node *ptr;
    ptr=head;
    while(ptr!=NULL){
        cout << ptr->data <<" ";
        ptr=ptr->next;
    }
}
