// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    public:
        Node(int data,Node* next){
            this->data=data;
            this->next=next;
        }
         Node(int data){
            this->data=data;
            this->next=nullptr;
        }
};

Node* convertArrayToLL(vector<int> vec){
    Node* head = new Node(vec[0]);
    Node* mover=head;
    for(int i=1;i<vec.size();i++){
        Node* temp=new Node(vec[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void showLL(Node* head){
    Node* mover=head;
    while(mover != NULL){
        
        if(mover->next == NULL){
            cout<<mover->data<<"-->NULL";
            mover=mover->next;
        } else {
            cout<<mover->data<<"-->";
            mover=mover->next;
        }
        
    } //while
}

Node* insertAtHead(Node* head,int data){
    Node* temp=new Node(data,head);
    return temp;
}

Node* insertAtTail(Node* head,int data){
    //edge case if head is null ----> empty LL
    if(head == NULL){
        Node* temp=new Node(data,head);
        return temp;
    }
    Node* mover=head;
    while(mover->next != NULL){
        mover=mover->next;
    }
    Node* temp=new Node(data);
    mover->next=temp;
    return head;
}

bool checkIfPresent(Node* head,int data){
    Node* mover=head;
    while(mover != NULL){
        if(mover->data == data){
            return true;
        }
        mover=mover->next;
    }
    return false;
}

int lengthOfLL(Node* head){
    Node* mover=head;
    int count=0;
    while(mover != NULL){
        count++;
        mover=mover->next;
    }
    return count;
}

int main() {
    vector<int> vec={2,4,6,8,10,12};
    Node* head = convertArrayToLL(vec);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nInsertat Head : \n";
    head = insertAtHead(head,100);
    
    
    cout<<"Link list : \n";
    showLL(head);
    
     cout<<"\n\nInsert at Tail : \n";
    insertAtTail(head,200);
    
    cout<<"Link list : \n";
    showLL(head);
    
    cout<<"\n\nSearch value 12 in LL : \n";
    cout<<checkIfPresent(head,12);
    
    cout<<"\n\nSearch value 122 in LL : \n";
    cout<<checkIfPresent(head,122);
    
     cout<<"\n\nCount elements in LL : \n";
    cout<<lengthOfLL(head);
    
    return 0;
}