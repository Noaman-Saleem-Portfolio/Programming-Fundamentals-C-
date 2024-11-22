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

int main() {
    vector<int> v={2,4,6,7,8,9};
    Node* head = convertArrayToLL(v);
    // cout<<head->next->next->next->next->next->data<<endl;
    // cout<<(head->next->next->next->next->next->next == NULL);
    cout<<lengthOfLL(head)<<endl;
    
    cout<<checkIfPresent(head, 5)<<endl;
    
    return 0;
}