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
            next=nullptr;
        }
};

 Node* convertArrayToLL(vector<int> vec){
    Node* head = new Node(vec[0]);
    Node* mover = head;
    for(int i=1; i<vec.size(); i++){
        Node* temp=new Node(vec[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int count=0;
    Node* mover=head;
    while(mover != NULL){
        count += 1;
        mover = mover->next;
    }
    return count;
}

bool checkIfPresent(Node* head, int val){
    Node* mover=head;
    while(mover != NULL){
        if(mover->data == val) return true;
        mover = mover->next;
    }
    return false;
}

Node* insertAtHead(Node* head,int val){
    Node* temp = new Node(val,head);
    return temp;
}

// void insertAtTail(Node* head,int val){
//     Node* mover=head;
//     while(mover != NULL){
//         if(mover->next == NULL){
//             Node* temp=new Node(val);
//             mover->next=temp;
//             return;
//         }
//         mover = mover->next;
//     }
// }
Node* insertAtTail(Node* head,int val){
    //edge case if head is null empty LL
    if(head == NULL){
         Node* temp = new Node(val,head);
        return temp; 
    }
    Node* mover=head;
    while(mover->next != NULL)
        mover=mover->next;
    
    Node* temp=new Node(val);  
    mover->next=temp;
    return head;
        
}

void printAllLL(Node* head){
    Node* mover=head;
    while(mover != NULL){
        cout<<mover->data<<" ";
        mover=mover->next;
    }
}

int main() {
    vector<int> v={2,4,6,7,8,9};
    Node* head = convertArrayToLL(v);
    cout<<head->data<<endl;
    // cout<<head->next->next->next->next->next->data<<endl;
    // cout<<(head->next->next->next->next->next->next == NULL);
    cout<<"Length of LL\n";
    cout<<lengthOfLL(head)<<endl;
    
    cout<<"Check 5 present\n";
    cout<<checkIfPresent(head, 5)<<endl;
    
    cout<<"Insert at head\n";
    head =insertAtHead(head,100);
    cout<<head->data<<endl;
    
    cout<<"Insert at tail\n";
    insertAtTail(head,300);
    cout<<head->next->next->next->next->next->next->next->data<<endl;
    
     cout<<"print All LL\n";
    printAllLL(head);
    
    return 0;
}