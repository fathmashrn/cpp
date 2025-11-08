#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int main(){
    Node *head=nullptr,*newnode,*temp;
    int choice=1;
    
    while(choice){
        newnode = new Node;
        
        cout << "Enter data : ";
        cin >> newnode->data;
        
        newnode->next=nullptr;
        
        if(head==nullptr){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cout << "Continue or not (1 or 0): ";
        cin >> choice;
    }
    
    cout << "\nLinked list: ";
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout << "NULL";
}
